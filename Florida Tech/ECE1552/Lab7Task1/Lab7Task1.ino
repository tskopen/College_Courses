// -------- Pin Definitions --------
const int joystickPin = A0;

const int enablePin = 11;   
const int in1 = 10;         
const int in2 = 6;         

int joystickValue = 0;
int motorSpeed = 0;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  joystickValue = analogRead(joystickPin);

  motorSpeed = map(abs(joystickValue - 512), 0, 512, 0, 255);

  if (joystickValue > 512) 
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  } 
  else 
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  analogWrite(enablePin, motorSpeed);

  Serial.print("Joystick: ");
  Serial.print(joystickValue);
  Serial.print(" Speed: ");
  Serial.println(motorSpeed);



  delay(50);
}