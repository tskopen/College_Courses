// 4-digit 7-seg clock — Uno pinout: digits D0..D3, segments a..g -> D4..D10
// Common-cathode display assumed. No DP used.

const uint8_t digitPins[4] = {11, 12, 2, 3};     // leftmost..rightmost
const uint8_t segPins[7]   = {4, 5, 6, 7, 8, 9, 10}; // a,b,c,d,e,f,g

unsigned long lastTick = 0;
const unsigned long tickInterval = 1000;
uint8_t hours = 12;
uint8_t minutes = 0;
uint8_t seconds = 0;
const uint8_t refreshDelay = 2; // ms per digit

void setup() {
  // set segment pins as OUTPUT
  for (uint8_t i=0; i<7; i++) pinMode(segPins[i], OUTPUT);
  // set digit pins as OUTPUT
  for (uint8_t i=0; i<4; i++) pinMode(digitPins[i], OUTPUT);

  // turn everything off initially (common-cathode: segment LOW off, digit HIGH disables)
  for (uint8_t i=0; i<7; i++) digitalWrite(segPins[i], LOW);
  for (uint8_t i=0; i<4; i++) digitalWrite(digitPins[i], HIGH);
}

void loop() {
  unsigned long now = millis();
  if (now - lastTick >= tickInterval) {
    lastTick += tickInterval;
    tickSecond();
  }

  uint8_t d0 = hours / 10;
  uint8_t d1 = hours % 10;
  uint8_t d2 = minutes / 10;
  uint8_t d3 = minutes % 10;

  // multiplex digits
  showDigit(0, d0, false);
  delay(refreshDelay);
  clearDigit(0);

  showDigit(1, d1, (seconds % 2 == 0)); // blink DP emulated via segment g (optional) — here dp=false so not used
  delay(refreshDelay);
  clearDigit(1);

  showDigit(2, d2, false);
  delay(refreshDelay);
  clearDigit(2);

  showDigit(3, d3, false);
  delay(refreshDelay);
  clearDigit(3);
}

void tickSecond() {
  seconds++;
  if (seconds >= 60) {
    seconds = 0;
    minutes++;
    if (minutes >= 60) {
      minutes = 0;
      hours++;
      if (hours >= 24) hours = 0;
    }
  }
}

// show digit at position pos (0..3), value 0..9; dp unused here
void showDigit(uint8_t pos, uint8_t val, bool dp) {
  // set segments a,b,c,d,e,f,g (common-cathode: HIGH lights segment)
  switch (val) {
    case 0: writeSeg(true,true,true,true,true,true,false); break;
    case 1: writeSeg(false,true,true,false,false,false,false); break;
    case 2: writeSeg(true,true,false,true,true,false,true); break;
    case 3: writeSeg(true,true,true,true,false,false,true); break;
    case 4: writeSeg(false,true,true,false,false,true,true); break;
    case 5: writeSeg(true,false,true,true,false,true,true); break;
    case 6: writeSeg(true,false,true,true,true,true,true); break;
    case 7: writeSeg(true,true,true,false,false,false,false); break;
    case 8: writeSeg(true,true,true,true,true,true,true); break;
    case 9: writeSeg(true,true,true,true,false,true,true); break;
    default: writeSeg(false,false,false,false,false,false,false); break;
  }

  // enable digit (common-cathode: drive LOW to sink)
  digitalWrite(digitPins[pos], LOW);
}

void clearDigit(uint8_t pos) {
  digitalWrite(digitPins[pos], HIGH);
}

// helper to write segments a..g
void writeSeg(bool a,bool b,bool c,bool d,bool e,bool f,bool g) {
  digitalWrite(segPins[0], a ? HIGH : LOW);
  digitalWrite(segPins[1], b ? HIGH : LOW);
  digitalWrite(segPins[2], c ? HIGH : LOW);
  digitalWrite(segPins[3], d ? HIGH : LOW);
  digitalWrite(segPins[4], e ? HIGH : LOW);
  digitalWrite(segPins[5], f ? HIGH : LOW);
  digitalWrite(segPins[6], g ? HIGH : LOW);
}
