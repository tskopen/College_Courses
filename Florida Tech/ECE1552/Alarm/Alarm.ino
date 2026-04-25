
const uint8_t digitPins[4] = {2, 3, 4, 5};
const uint8_t segPins[8]   = {6, 7, 8, 9, 10, 11, 12, 13};
// segment order:             a  c  dp d   e   f  b   g

unsigned long lastTick = 0;
const unsigned long tickInterval = 1000;

uint8_t hours = 12;
uint8_t minutes = 0;
uint8_t seconds = 0;

const uint8_t refreshDelay = 2;

// segment order: a b c d e f g dp
// LOW = ON, HIGH = OFF (inverted logic)

// LOW = ON (common anode or inverted driver)

const uint8_t digitMap[10] = {
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

void setup() 
{
  for (uint8_t i = 0; i < 10; i++) pinMode(segPins[i], OUTPUT);
  for (uint8_t i = 0; i < 4; i++) pinMode(digitPins[i], OUTPUT);

  //debug upset
/*
  for (uint8_t i = 0; i < 4; i++) 
  {
    digitalWrite(digitPins[i], LOW);
    for (uint8_t i = 0; i < 8; i++) 
      {
        digitalWrite(segPins[i], HIGH);
      }
  }
  //cycle each segment
  for (uint8_t i = 0; i < 4; i++) 
  {
    digitalWrite(digitPins[i], HIGH);
    for (uint8_t i = 0; i < 8; i++) 
      {
        digitalWrite(segPins[i], LOW);
        delay(100);
        digitalWrite(segPins[i], HIGH);
      }
    digitalWrite(digitPins[i], LOW);
  }
*/
  //cycle digits
  for (uint8_t d = 0; d < 4; d++) 
  {
    // enable one digit
    digitalWrite(digitPins[d], HIGH);  // (based on your hardware)

    for (uint8_t s = 0; s < 10; s++) 
    {
      showDigit(d, s, LOW);
      delay(100);
    }
    // disable digit
    digitalWrite(digitPins[d], LOW);
  }

}





void loop() 
{
  // time update
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

  // multiplex display
  for (uint8_t i = 0; i < 4; i++)
  {
    showDigit(i, d[i], (i == 1 && seconds % 2 == 0)); // blink colon
    delay(refreshDelay);
    clearDigit(i);
  }
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

  writeSeg(pattern);

  digitalWrite(digitPins[pos], HIGH); // ENABLE
}

void clearDigit(uint8_t pos)
{
  digitalWrite(digitPins[pos], LOW); // DISABLE
}

void writeSeg(uint8_t pattern)
{
  digitalWrite(segPins[0], (pattern >> 3) & 1); // d → pin 6
  digitalWrite(segPins[1], (pattern >> 4) & 1); // e → pin 7
  digitalWrite(segPins[2], (pattern >> 5) & 1); // f → pin 8
  digitalWrite(segPins[3], (pattern >> 6) & 1); // g → pin 9

  digitalWrite(segPins[4], (pattern >> 0) & 1); // a → pin 10
  digitalWrite(segPins[5], (pattern >> 1) & 1); // b → pin 11
  digitalWrite(segPins[6], (pattern >> 2) & 1); // c → pin 12
  digitalWrite(segPins[7], (pattern >> 7) & 1); // dp → pin 13
}