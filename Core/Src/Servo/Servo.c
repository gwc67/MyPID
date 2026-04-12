#include "Servo.h"

#define Servo_Time TIM2

void Servo_Init(void)
{
    TIM_Count_Enable(Servo_Time);
    TIM_PWM_Enable(Servo_Time, LL_TIM_CHANNEL_CH1);
}

void Servo_SetSpeed(int8_t PWM)
{
    if (PWM >= 0)
    {
        AIN1(1);
        AIN2(0);
        TIM_SetCompare(Servo_Time,PWM);
    }
    else
    {
        AIN1(0);
        AIN2(1);

        TIM_SetCompare(Servo_Time, -PWM);
    }
}