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
extern uint16_t data;
extern float Inner_Ki, Inner_Kp, Inner_Kd;
extern volatile float Inner_Target, Inner_Actual,Inner_Out;
extern float Inner_error0, Inner_error1, Inner_errorInt; // 本次误差，上次误差，误差积分
extern float Out_Ki, Out_Kp, Out_Kd;
extern volatile float Out_Target, Out_Actual,Out_Out;
extern float Out_error0, Out_error1, Out_errorInt; // 本次误差，上次误差，误差积分
extern int16_t Speed, Location;

#endif