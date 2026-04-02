#include "Servo.h"

void Servo_Init(void)
{
    TIM_Count_Enable(TIM2);
    TIM_PWM_Enable(TIM2, LL_TIM_CHANNEL_CH1);
}

void Servo_SetSpeed(int8_t PWM)
{
    if (PWM >= 0)
    {
        AIN1(1);
        AIN2(0);
        TIM_SetCompare(TIM2,PWM);
    }
    else
    {
        AIN1(0);
        AIN2(1);

        TIM_SetCompare(TIM2, -PWM);
    }
}