#ifndef __ALL_H
#define __ALL_H

#include "main.h"
#include "Key.h"
#include "st7735.h"
#include "font.h"
#include "Store.h"
#include "MENU_Show.h"
#include "Servo.h"
#include "Encode.h"
#include "Uart.h"
#include "stdio.h"
#include "stdint.h"
#include "stdarg.h"
#include "MENU.h"
#include "stdbool.h"
#include "math.h"
extern float diffout , actual1;
extern float error0 ,error1,errorInt;   
extern uint16_t data;
extern int8_t PWM;
extern volatile float Target;
extern volatile float Actual;
extern volatile float Out;
extern float Kp ;
extern float Ki ;
extern float Kd ;
#endif