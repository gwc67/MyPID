#ifndef __ALL_H
#define __ALL_H

#include "PID.h"
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
extern struct PID_t Inner;
extern struct PID_t Outer;
extern int16_t Speed,Location;
#endif