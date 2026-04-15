#include "functions.h"

Servo myServo;

int motorPWM, motorDX1, motorDX2;

// ================= LED =================
void initialize_led(int pin){ pinMode(pin,OUTPUT); }

void turn_on_led(int pin){ digitalWrite(pin,HIGH); }

void turnoff_led(int pin){ digitalWrite(pin,LOW); }

void blink_led(int pin,int periodms){
    digitalWrite(pin,HIGH);
    delay(periodms);
    digitalWrite(pin,LOW);
    delay(periodms);
}

void blink_led(int pin,int periodms,int durationms){
    unsigned long start=millis();
    while(millis()-start<durationms){
        blink_led(pin,periodms);
    }
}

void stop_blinking(int pin){ digitalWrite(pin,LOW); }

void fade_led_sawtooth(int pin,int periodms){
    for(int i=0;i<=255;i++){
        analogWrite(pin,i);
        delay(periodms/255);
    }
}

void fade_led_sawtooth(int pin,int periodms,int durationms){
    unsigned long start=millis();
    while(millis()-start<durationms){
        fade_led_sawtooth(pin,periodms);
    }
}

void fade_led_triangle(int pin,int periodms){
    for(int i=0;i<=255;i++){
        analogWrite(pin,i);
        delay(periodms/510);
    }
    for(int i=255;i>=0;i--){
        analogWrite(pin,i);
        delay(periodms/510);
    }
}

void fade_led_triangle(int pin,int periodms,int durationms){
    unsigned long start=millis();
    while(millis()-start<durationms){
        fade_led_triangle(pin,periodms);
    }
}

void stop_fading(){}

// ================= BUTTON =================
void initialize_button(int pin){
    pinMode(pin,INPUT_PULLUP);
}

bool readbutton(int pin){
    return digitalRead(pin)==LOW;
}

bool readbutton(int pin, button_callback_t callback){
    if(digitalRead(pin)==LOW){
        callback();
        return true;
    }
    return false;
}

// ================= JOYSTICK =================
int read_joystick_xaxis(int xpin){ return analogRead(xpin); }

int read_joystick_yaxis(int ypin){ return analogRead(ypin); }

void detect_joystick_flick(int xpin,int ypin, joystick_callback_t callback){
    int x=analogRead(xpin);
    int y=analogRead(ypin);

    if(x>700) callback("RIGHT");
    else if(x<300) callback("LEFT");
    else if(y>700) callback("UP");
    else if(y<300) callback("DOWN");
}

// ================= RGB =================
int rgbR,rgbG,rgbB;

void initialize_rgb(int r,int g,int b){
    rgbR=r; rgbG=g; rgbB=b;
    pinMode(r,OUTPUT);
    pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);
}

void rgb_setcolor(int color){
    analogWrite(rgbR,(color>>16)&255);
    analogWrite(rgbG,(color>>8)&255);
    analogWrite(rgbB,color&255);
}

void rgb_setcolor(int r,int g,int b){
    analogWrite(rgbR,r);
    analogWrite(rgbG,g);
    analogWrite(rgbB,b);
}

// ================= ACTIVE BUZZER =================
void initialize_active_buzzer(int pin){ pinMode(pin,OUTPUT); }

void play_active_buzzer(int pin){ digitalWrite(pin,HIGH); }

void play_active_buzzer(int pin,int durationms){
    digitalWrite(pin,HIGH);
    delay(durationms);
    digitalWrite(pin,LOW);
}

void play_active_buzzer_alarm(int pin,int periodms){
    digitalWrite(pin,HIGH);
    delay(periodms);
    digitalWrite(pin,LOW);
    delay(periodms);
}

void play_active_buzzer_alarm(int pin,int periodms,int duration){
    unsigned long start=millis();
    while(millis()-start<duration){
        play_active_buzzer_alarm(pin,periodms);
    }
}

void stop_active_buzzer(int pin){ digitalWrite(pin,LOW); }

// ================= PASSIVE BUZZER =================
void initialize_passive_buzzer(int pin){ pinMode(pin,OUTPUT); }

void play_police_siren(int pin){
    tone(pin,800);
    delay(500);
    tone(pin,1200);
    delay(500);
}

// ================= SERVO =================
void initialize_servo(int pin){ myServo.attach(pin); }

void servo_gotoangle(int pin,int angle){ myServo.write(angle); }

void sweep_servo(int startangle,int endangle,int periodms){
    for(int i=startangle;i<=endangle;i++){
        myServo.write(i);
        delay(periodms/abs(endangle-startangle));
    }
}

// ================= MOTOR =================
void initialize_motor(int pwmpin,int dx1,int dx2){
    motorPWM=pwmpin;
    motorDX1=dx1;
    motorDX2=dx2;

    pinMode(pwmpin,OUTPUT);
    pinMode(dx1,OUTPUT);
    pinMode(dx2,OUTPUT);
}

void set_motor_direction(int directn){
    if(directn==1){
        digitalWrite(motorDX1,HIGH);
        digitalWrite(motorDX2,LOW);
    }else{
        digitalWrite(motorDX1,LOW);
        digitalWrite(motorDX2,HIGH);
    }
}

void set_motor_speed(int sped){
    analogWrite(motorPWM,sped);
}