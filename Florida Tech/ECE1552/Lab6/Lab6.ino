// -------- Pin Definitions --------
const int buzzerPin = 2;

const int buttonPins[5] = {3, 4, 5, 6, 7};


const int notes[5] = {523, 587, 659, 698, 784};

unsigned long lastDebounceTime[5] = {0};
unsigned long debounceDelay = 25;
bool buttonState[5] = {HIGH, HIGH, HIGH, HIGH, HIGH};
bool lastReading[5] = {HIGH, HIGH, HIGH, HIGH, HIGH};



// -------- Setup --------
void setup()
{
  for(int i=0;i<5;i++)
  {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  pinMode(buzzerPin, OUTPUT);

}

// -------- Loop --------
void loop()
{
  bool notePlaying = false;

  for(int i=0;i<5;i++)
  {
    bool reading = digitalRead(buttonPins[i]);

    // Debounce
    if(reading != lastReading[i])
    {
      lastDebounceTime[i] = millis();
    }

    if((millis() - lastDebounceTime[i]) > debounceDelay)
    {
      if(reading != buttonState[i])
      {
        buttonState[i] = reading;

        if(buttonState[i] == LOW)
        {
          // Button pressed
          tone(buzzerPin, notes[i]);
        }
        else
        {
          // Button released
          noTone(buzzerPin);
        }
      }
    }

    lastReading[i] = reading;
  }
}