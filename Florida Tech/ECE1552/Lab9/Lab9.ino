#include "functions.h"

int leds[6]={3,4,5,6,7,8};

int currentLED=0;

int joystickX=A0;
int potPin=A1;
int buttonPin=2;

bool blinking=false;
bool lastButton=false;

void setup()
{
    Serial.begin(9600);

    for(int i=0;i<6;i++)
        initialize_led(leds[i]);

    initialize_button(buttonPin);
}

void loop()
{
    int x=read_joystick_xaxis(joystickX);

    int pot=analogRead(potPin);

    int blinkRate=map(pot,0,1023,100,1000);

    Serial.print(x);
    Serial.print(",");
    Serial.println(blinkRate);

    // MOVE LED
    if(x>700 && currentLED<5){
        currentLED++;
        delay(200);
    }

    if(x<300 && currentLED>0){
        currentLED--;
        delay(200);
    }

    // BUTTON TOGGLE
    bool pressed=readbutton(buttonPin);

    if(pressed && !lastButton){
        blinking=!blinking;
        delay(50);
    }

    lastButton=pressed;

    // TURN OFF ALL
    for(int i=0;i<6;i++)
        turnoff_led(leds[i]);

    // BLINK OR SOLID
    if(blinking)
        blink_led(leds[currentLED],blinkRate);
    else
        turn_on_led(leds[currentLED]);

    delay(30);
}