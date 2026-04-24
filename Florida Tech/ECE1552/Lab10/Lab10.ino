
#include <avr/io.h>
enum direction 
{
    DXN_INPUT,
    DXN_OUTPUT
};

// ===== TASK 1: mypinMode =====
void mypinMode(int pin, direction dxn) 
{
    volatile uint8_t* ddr;

    if (pin >= 0 && pin <= 7) 
    {
        ddr = &DDRD;
    } 
    else if (pin >= 8 && pin <= 13) 
    {
        ddr = &DDRB;
        pin -= 8;
    } 
    else 
    {
        return; // invalid pin
    }

    if (dxn == DXN_OUTPUT) 
    {
        *ddr |= (1 << pin);    // set bit → OUTPUT
    } 
    else 
    {
        *ddr &= ~(1 << pin);   // clear bit → INPUT
    }
}

// ===== TASK 2: mydigitalWrite =====
void mydigitalWrite(int pin, bool state) {
    volatile uint8_t* port;

    if (pin >= 0 && pin <= 7) 
    {
        port = &PORTD;
    } 
    else if (pin >= 8 && pin <= 13) 
    {
        port = &PORTB;
        pin -= 8;
    } 
    else 
    {
        return; 

    if (state) 
    {
        *port |= (1 << pin);
    } else 
    {
        *port &= ~(1 << pin);
    }
}

// ===== TASK 3: mydigitalRead =====
int mydigitalRead(int pin) 
{
    volatile uint8_t* pinReg;

    if (pin >= 0 && pin <= 7) 
    {
        pinReg = &PIND;
    } 
    else if (pin >= 8 && pin <= 13) 
    {
        pinReg = &PINB;
        pin -= 8;
    } 
    else 
    {
        return -1;
    }

    if (*pinReg & (1 << pin)) 
    {
        return 1
    } 
    else 
    {
        return 0;
    }
}

// ===== TASK 4: Blink LED =====
void setup() 
{
    mypinMode(8, DXN_OUTPUT); 
}

void loop() 
{
    mydigitalWrite(8, true); 
    delay(1000);

    mydigitalWrite(8, false); 
    delay(1000);
}