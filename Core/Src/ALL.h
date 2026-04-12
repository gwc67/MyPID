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

extern volatile int8_t speed;
extern uint16_t data;
extern int8_t PWM;
extern float Target;
extern float Actual;
extern float Out;

#endif