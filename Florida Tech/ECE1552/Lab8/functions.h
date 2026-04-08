#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <Arduino.h>
#include <Servo.h>

typedef void (*button_callback_t)();
typedef void (*joystick_callback_t)(String direction);

void initialize_led(int pin);
void turn_on_led(int pin);
void turnoff_led(int pin);
void blink_led(int pin, int periodms);
void blink_led(int pin,int periodms,int durationms);
void stop_blinking(int pin);

void fade_led_sawtooth(int pin,int periodms);
void fade_led_sawtooth(int pin, int periodms,int durationms);

void fade_led_triangle(int pin,int periodms);
void fade_led_triangle(int pin, int periodms,int durationms);

void stop_fading();

void initialize_button(int pin);
bool readbutton(int pin);
bool readbutton(int pin, button_callback_t callback);

int read_joystick_xaxis(int xpin);
int read_joystick_yaxis(int ypin);
void detect_joystick_flick(int xpin,int ypin, joystick_callback_t callback);

// RGB FUNCTIONS
void initialize_rgb(int r,int g,int b);
void rgb_setcolor(int color);
void rgb_setcolor(int r,int g,int b);

// ACTIVE BUZZER
void initialize_active_buzzer(int pin);
void play_active_buzzer(int pin);
void play_active_buzzer(int pin,int durationms);
void play_active_buzzer_alarm(int pin,int periodms);
void play_active_buzzer_alarm(int pin,int periodms,int duration);
void stop_active_buzzer(int pin);

// PASSIVE BUZZER
void initialize_passive_buzzer(int pin);
void play_police_siren(int pin);

// SERVO
void initialize_servo(int pin);
void servo_gotoangle(int pin,int angle);
void sweep_servo(int startangle,int endangle,int periodms);

// MOTOR
void initialize_motor(int pwmpin,int dx1,int dx2);
void set_motor_direction(int directn);
void set_motor_speed(int sped);

#endif