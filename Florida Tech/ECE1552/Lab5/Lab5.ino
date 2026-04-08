int leds[6] = {2,3,4,5,6,7};

int led = 0;

void setup()
{
  Serial.begin(9600);

  for(int i = 0; i < 6; i++)
  {
    pinMode(leds[i], OUTPUT);
  }

  pinMode(8, INPUT_PULLUP); 
}

void loop()
{
  int x = analogRead(A0);     
  int pot = analogRead(A1); 
  int speed = map(pot,0,1023,100,2000);

  Serial.print("Joystick: ");
  Serial.println(x);

  // -------- MOVE LED -------

  if(digitalRead(8) == HIGH) 
  {
    if(x > 700 && led < 5)
    {
      led++;
      delay(200);
    }

    if(x < 300 && led > 0)
    {
      led--;
      delay(200);
    }
  }

  // ------- TURN LEDs ON/OFF --------

  for(int i = 0; i < 6; i++)
  {
    if(i == led)
    {
      digitalWrite(leds[i], HIGH);
    }
    else
    {
      digitalWrite(leds[i], LOW);
    }
  }

  // -------- BLINK MODE --------

  if(digitalRead(8) == LOW)
  {
    digitalWrite(leds[led], LOW);
    delay(speed);

    digitalWrite(leds[led], HIGH);
    delay(speed);
  }
}
