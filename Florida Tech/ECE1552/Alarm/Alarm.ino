// Thor Kopenkoskey Apr 29

const int buttonPins[4] = {A0, A1, A2, A3}; // alarm, snooze, hours, minutes
const int buzzerPin = A4;
const int ledPin = A5;

const uint8_t digitPins[4] = {2, 3, 4, 5};
const uint8_t segPins[8]   = {6, 7, 8, 9, 10, 11, 12, 13};

const uint8_t digitMap[10] =
{
  0b00000001, 0b10111101, 0b01100100, 0b00101100, 0b10111000,
  0b00101010, 0b00100010, 0b00111101, 0b00100000, 0b00101000,
};

uint8_t hours = 12, minutes = 0, seconds = 0;
unsigned long lastTick = 0;
const unsigned long tickInterval = 1000;

bool alarmEnabled = false;
bool alarmSettingMode = false;
bool alarmRinging = false;

uint8_t alarmHours = 6;
uint8_t alarmMinutes = 0;

int nextAlarmMin = -1;

bool buttonState[4] = {false};
bool lastButtonState[4] = {false};
unsigned long lastDebounceTime[4] = {0};
unsigned long holdTime[4] = {0};

const unsigned long debounceDelay = 50;
const unsigned long holdRepeatDelay = 250;

unsigned long lastMux = 0;
int currentDigit = 0;
const int muxDelay = 2;

unsigned long buzzerTimer = 0;
bool buzzerState = false;

int ledBrightness = 0;

void writeSeg(uint8_t pattern)
{
  digitalWrite(segPins[0], (pattern >> 3) & 1);
  digitalWrite(segPins[1], (pattern >> 4) & 1);
  digitalWrite(segPins[2], (pattern >> 5) & 1);
  digitalWrite(segPins[3], (pattern >> 6) & 1);
  digitalWrite(segPins[4], (pattern >> 0) & 1);
  digitalWrite(segPins[5], (pattern >> 1) & 1);
  digitalWrite(segPins[6], (pattern >> 2) & 1);
  digitalWrite(segPins[7], (pattern >> 7) & 1);
}

void showDigit(uint8_t pos, uint8_t val, bool dp)
{
  uint8_t pattern = digitMap[val];
  if (dp) pattern &= ~(1 << 5);
  else pattern |= (1 << 5);

  writeSeg(pattern);
  digitalWrite(digitPins[pos], HIGH);
}

void clearDigits()
{
  for (int i = 0; i < 4; i++) digitalWrite(digitPins[i], LOW);
}

// TIME
void tickSecond()
{
  seconds++;
  if (seconds >= 60)
  {
    seconds = 0;
    minutes++;
    if (minutes >= 60)
    {
      minutes = 0;
      hours = (hours + 1) % 24;
    }
  }
}

int currentMinutes()
{
  return hours * 60 + minutes;
}

void setup()
{
  setTimeFromCompile();

  for (int i = 0; i < 8; i++) pinMode(segPins[i], OUTPUT);
  for (int i = 0; i < 4; i++)
  {
    pinMode(digitPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  unsigned long now = millis();

  // TIME
  if (now - lastTick >= tickInterval)
  {
    lastTick += tickInterval;
    tickSecond();
  }

  // ALARM CHECK 
  if (!alarmRinging)
  {
    int nowMin = currentMinutes();

    if (alarmEnabled &&
        nextAlarmMin == nowMin &&
        seconds == 0)
    {
      alarmRinging = true;
    }
  }

  // BUZZER
  if (alarmRinging)
  {
    if (millis() - buzzerTimer >= 50)
    {
      buzzerTimer = millis();
      buzzerState = !buzzerState;

      if (buzzerState) tone(buzzerPin, 1000);
      else noTone(buzzerPin);
    }
  }
  else noTone(buzzerPin);

  // LED
  updateLED(now);

  // DISPLAY
  if (millis() - lastMux >= muxDelay)
  {
    lastMux = millis();
    clearDigits();

    uint8_t h = alarmSettingMode ? alarmHours : hours;
    uint8_t m = alarmSettingMode ? alarmMinutes : minutes;

    uint8_t d[4] = {h / 10, h % 10, m / 10, m % 10};
    uint8_t order[4] = {3, 2, 0, 1};

    showDigit(currentDigit, d[order[currentDigit]],
              (currentDigit == 1 || currentDigit == 3) && (seconds % 2 == 0));

    currentDigit = (currentDigit + 1) % 4;
  }

  checkButtons();
}

// LED
void updateLED(unsigned long now)
{
  if (alarmRinging)
  {
    unsigned long t = micros() % 3000;

    float phase = (float)t / 3000.0;
    float tri = (phase < 0.5) ? phase * 2.0 : 2.0 - phase * 2.0;

    ledBrightness = 40 + tri * 215;

    static unsigned long pwmT = 0;
    static int pwm = 0;

    if (micros() - pwmT >= 500)
    {
      pwmT = micros();
      pwm = (pwm + 1) & 255;
      digitalWrite(ledPin, pwm < ledBrightness);
    }
    return;
  }

  if (alarmSettingMode)
  {
    digitalWrite(ledPin, (millis() / 100) % 2);
    return;
  }

  digitalWrite(ledPin, LOW);
}

// scan buttons
void checkButtons()
{
  for (int i = 0; i < 4; i++)
  {
    bool reading = (digitalRead(buttonPins[i]) == LOW);

    if (reading != lastButtonState[i])
      lastDebounceTime[i] = millis();

    if (millis() - lastDebounceTime[i] > debounceDelay)
    {
      if (reading != buttonState[i])
      {
        buttonState[i] = reading;

        if (buttonState[i])
        {
          handleButtonPress(i);
          holdTime[i] = millis();
        }
      }
    }

    if (buttonState[i] && millis() - holdTime[i] > holdRepeatDelay)
    {
      holdTime[i] = millis();
      handleButtonPress(i);
    }

    lastButtonState[i] = reading;
  }
}

// Button Logic
void handleButtonPress(int btn)
{
  switch (btn)
  {
    case 0: // alarm toggle
      if (alarmRinging)
      {
        alarmRinging = false;
        noTone(buzzerPin);
      }
      else
      {
        alarmSettingMode = !alarmSettingMode;
        alarmEnabled = true;

        nextAlarmMin = alarmHours * 60 + alarmMinutes;
      }
      break;

    case 1: // snooze (+5 min)
      if (alarmRinging)
      {
        alarmRinging = false;
        noTone(buzzerPin);

        nextAlarmMin = (currentMinutes() + 5) % 1440;
      }
      break;

    case 2:
      if (alarmSettingMode)
        alarmHours = (alarmHours + 1) % 24;
      else
      {
        hours = (hours + 1) % 24;
        seconds = 0;
      }
      break;

    case 3:
      if (alarmSettingMode)
        alarmMinutes = (alarmMinutes + 1) % 60;
      else
      {
        minutes = (minutes + 1) % 60;
        seconds = 0;
      }
      break;
  }
}

//Time init
void setTimeFromCompile()
{
  hours   = ((__TIME__[0]-'0')*10 + (__TIME__[1]-'0'));
  minutes = ((__TIME__[3]-'0')*10 + (__TIME__[4]-'0'));
  seconds = ((__TIME__[6]-'0')*10 + (__TIME__[7]-'0'));
}
// Thor Kopenkoskey Apr 29
