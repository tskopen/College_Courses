/*
 * Custom Arduino Register Functions
 * Name: (Your Name)
 * Description: Implements mypinMode, mydigitalWrite, and mydigitalRead
 * using direct register manipulation, then blinks an LED.
 */
#include <avr/io.h>
// ===== ENUM DEFINITION =====
enum direction {
    DXN_INPUT,
    DXN_OUTPUT
};

// ===== TASK 1: mypinMode =====
void mypinMode(int pin, direction dxn) {
    volatile uint8_t* ddr;

    if (pin >= 0 && pin <= 7) {
        ddr = &DDRD;
    } 
    else if (pin >= 8 && pin <= 13) {
        ddr = &DDRB;
        pin -= 8;
    } 
    else {
        return; // invalid pin
    }

    if (dxn == DXN_OUTPUT) {
        *ddr |= (1 << pin);    // set bit → OUTPUT
    } else {
        *ddr &= ~(1 << pin);   // clear bit → INPUT
    }
}

// ===== TASK 2: mydigitalWrite =====
void mydigitalWrite(int pin, bool state) {
    volatile uint8_t* port;

    if (pin >= 0 && pin <= 7) {
        port = &PORTD;
    } 
    else if (pin >= 8 && pin <= 13) {
        port = &PORTB;
        pin -= 8;
    } 
    else {
        return; // invalid pin
    }

    if (state) {
        *port |= (1 << pin);    // HIGH
    } else {
        *port &= ~(1 << pin);   // LOW
    }
}

// ===== TASK 3: mydigitalRead =====
int mydigitalRead(int pin) {
    volatile uint8_t* pinReg;

    if (pin >= 0 && pin <= 7) {
        pinReg = &PIND;
    } 
    else if (pin >= 8 && pin <= 13) {
        pinReg = &PINB;
        pin -= 8;
    } 
    else {
        return -1; // invalid pin
    }

    if (*pinReg & (1 << pin)) {
        return 1; // HIGH
    } else {
        return 0; // LOW
    }
}

// ===== TASK 4: Blink LED =====
void setup() {
    mypinMode(13, DXN_OUTPUT); // set pin 13 as output
}

void loop() {
    mydigitalWrite(13, true);  // LED ON
    delay(1000);

    mydigitalWrite(13, false); // LED OFF
    delay(1000);
}