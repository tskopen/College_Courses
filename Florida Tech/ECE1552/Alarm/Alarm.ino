// Pin assignments
const int buttonPins[4] = {A0, A1, A2, A3};
const int buzzerPin = A4;
const int ledPin = A5;

bool alarmEnabled = false;
bool alarmSettingMode = false;
bool alarmRinging = false;

uint8_t alarmHours = 6;
uint8_t alarmMinutes = 0;

bool buttonState[4] = {false};
bool lastButtonState[4] = {false};

unsigned long snoozeUntil = 0;
// Alarm button A0, Snooze Button A1, A2 hours, A3 minutes

const uint8_t digitPins[4] = {2, 3, 4, 5};
const uint8_t segPins[8]   = {6, 7, 8, 9, 10, 11, 12, 13};
// segment order:             a  c  dp d   e   f  b   g

const uint8_t digitMap[10] = 
{
  // array pin order: {6, 7, 8, 9, 10, 11, 12, 13};
  // segment order:     a c  dp d   e   f   b   g
  0b00000001, //0
  0b10111101, //1
  0b01100100, //2
  0b00101100, //3
  0b10111000, //4
  0b00101010, //5
  0b00100010, //6
  0b00111101, //7
  0b00100000, //8
  0b00101000, //9
};
unsigned long lastTick = 0;
const unsigned long tickInterval = 1000;

uint8_t hours = 12;
uint8_t minutes = 0;
uint8_t seconds = 0;

const uint8_t refreshDelay = 2;

void setup() 
{
  Serial.begin(9600);

  setTimeFromCompile();
  for (uint8_t i = 0; i < 8; i++) pinMode(segPins[i], OUTPUT);
  for (uint8_t i = 0; i < 4; i++) pinMode(digitPins[i], OUTPUT);

  for (uint8_t d = 0; d < 4; d++) 
  {
    // enable one digit
    digitalWrite(digitPins[d], HIGH);  // (based on your hardware)

    for (uint8_t s = 0; s < 10; s++) 
    {
      showDigit(d, s, LOW);
      delay(10);
    }
    // disable digit
    digitalWrite(digitPins[d], LOW);
  }

  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  // Initialize outputs
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}


void loop() 
{
  unsigned long now = millis();

  if (now - lastTick >= tickInterval) 
  {
    lastTick += tickInterval;
    tickSecond();
  }

  uint8_t d[4] = 
  {
    hours / 10,
    hours % 10,
    minutes / 10,
    minutes % 10
  };

  for (uint8_t i = 0; i < 4; i++)
  {
    uint8_t idx = 3 - i;  

    showDigit(i, d[idx], (i == 1 && seconds % 2 == 0));
    delay(refreshDelay);
    clearDigit(i);
  }
   checkButtons();

    // Check alarm trigger
  if (!alarmRinging && alarmEnabled)
  {
    if (hours == alarmHours && minutes == alarmMinutes)
    {
      alarmRinging = true;
      Serial.println("ALARM TRIGGERED");
      alarmEnabled = false;
    }
  }

  // Handle snooze wake-up
  if (!alarmRinging && snoozeUntil > 0 && millis() > snoozeUntil)
  {
    alarmRinging = true;
    snoozeUntil = 0;
  }

  if (alarmRinging)
  {
    if ((millis() / 100) % 2 == 0)
      tone(buzzerPin, 1000);
    else
      noTone(buzzerPin);

    static int brightness = 0;
    static int fadeDir = 1;

    brightness += fadeDir;

    if (brightness <= 0 || brightness >= 255)
      fadeDir *= -1;

    analogWrite(ledPin, brightness);
    delay(3);
  }


  if (alarmSettingMode)
  {
    if ((millis() / 100) % 2 == 0)
      tone(buzzerPin, 1000);
    else
      noTone(buzzerPin);

    static int brightness = 0;
    static int fadeDir = 1;

    brightness += fadeDir;

    if (brightness <= 0 || brightness >= 255)
      fadeDir *= -1;

    analogWrite(ledPin, brightness);
    delay(5);
  }

  analogWrite(ledPin, 0);

}

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
      hours++;
      if (hours >= 24) hours = 0;
    }
  }
}

void showDigit(uint8_t pos, uint8_t val, bool dp)
{
  uint8_t pattern = digitMap[val];
  
  if (dp)
    pattern &= ~(1 << 5);   // ON
  else
    pattern |= (1 << 5);    // OFF

  writeSeg(pattern);

  digitalWrite(digitPins[pos], HIGH); // ENABLE
}

void clearDigit(uint8_t pos)
{
  digitalWrite(digitPins[pos], LOW); // DISABLE
}

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


void setTimeFromCompile()
{
  // __TIME__ format: "HH:MM:SS"
  hours   = (uint8_t)((__TIME__[0] - '0') * 10 + (__TIME__[1] - '0'));
  minutes = (uint8_t)((__TIME__[3] - '0') * 10 + (__TIME__[4] - '0'));
  seconds = (uint8_t)((__TIME__[6] - '0') * 10 + (__TIME__[7] - '0'));
}

void checkButtons()
{
  for (int i = 0; i < 4; i++) 
  {
    bool pressed = (digitalRead(buttonPins[i]) == LOW); // active LOW

    buttonState[i] = pressed;

    // Detect NEW press (edge)
    if (buttonState[i] && !lastButtonState[i]) 
    {
      Serial.print("BUTTON PRESSED: ");
      Serial.println(i);

      handleButtonPress(i);
    }

    lastButtonState[i] = buttonState[i];
  }
}

void handleButtonPress(int btn)
{
  switch (btn)
  {
    case 0:
      if (alarmRinging)
      {
        // Stop alarm
        alarmRinging = false;
        noTone(buzzerPin);
        Serial.println("Alarm stopped");
      }
      else
      {
        // Toggle alarm setting mode
        alarmSettingMode = !alarmSettingMode;
        Serial.println(alarmSettingMode ? "Entering alarm set mode" : "Exiting alarm set mode");
        
      }
      break;

    case 1:
      if (alarmRinging)
      {
        alarmRinging = false;
        noTone(buzzerPin);

        // Snooze for 5 minutes
        snoozeUntil = millis() + 5UL * 60UL * 1000UL;

        Serial.println("Snoozed for 5 minutes");
      }
      break;

    case 2:
      if (alarmSettingMode)
      {
        alarmHours = (alarmHours + 1) % 24;
        Serial.print("Alarm Hour: ");
        Serial.println(alarmHours);
      }
      else
      {
        hours = (hours + 1) % 24;
        Serial.print("Time Hour: ");
        Serial.println(hours);
      }
      break;

    case 3:
      if (alarmSettingMode)
      {
        alarmMinutes = (alarmMinutes + 1) % 60;
        Serial.print("Alarm Minute: ");
        Serial.println(alarmMinutes);
      }
      else
      {
        minutes = (minutes + 1) % 60;
        Serial.print("Time Minute: ");
        Serial.println(minutes);
      }
      break;
  }
}