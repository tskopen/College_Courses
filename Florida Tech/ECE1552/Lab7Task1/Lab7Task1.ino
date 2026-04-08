const int joystickPin = A0;

const int enablePin = 11;
const int in1 = 10;
const int in2 = 6;

const int redLED = 5;
const int buzzer = 4;

int joystickValue = 0;
int motorSpeed = 0;

unsigned long startTime = 0;
bool timerActive = false;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  joystickValue = analogRead(joystickPin);

  motorSpeed = map(abs(joystickValue - 512), 0, 512, 0, 255);

  if (joystickValue > 512) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  // -------- Overheat Detection --------
  if (motorSpeed > 200) 
  {

    if (!timerActive) 
    {
      startTime = millis();
      timerActive = true;
    }

    if (millis() - startTime >= 10000) 
    {

      analogWrite(enablePin, 0);

      while (true) 
      {

        digitalWrite(redLED, HIGH);
        tone(buzzer, 1000);
        delay(500);

        digitalWrite(redLED, LOW);
        noTone(buzzer);
        delay(500);
      }
    }

  }
  else 
  {
    timerActive = false;
  }

  analogWrite(enablePin, motorSpeed);

  Serial.print("Joystick: ");
  Serial.print(joystickValue);
  Serial.print(" Speed: ");
  Serial.println(motorSpeed);

  delay(50);
}