#ifndef __SERVO_H
#define __SERVO_H

//note : 引脚命名为 AIN1 ， AIN2


#include "ALL.h"

#define TIM_SetCompare(TIM,Speed)  LL_TIM_OC_SetCompareCH1(TIM,Speed)
#define TIM_Count_Enable(TIM)               LL_TIM_EnableCounter(TIM)
#define TIM_PWM_Enable(TIM,Channel)            LL_TIM_CC_EnableChannel(TIM,Channel)

#define AIN1(x)  ((x)?  LL_GPIO_SetOutputPin(AIN1_GPIO_Port, AIN1_Pin) : LL_GPIO_ResetOutputPin(AIN1_GPIO_Port,AIN1_Pin))
#define AIN2(x)  ((x)?   LL_GPIO_SetOutputPin(AIN2_GPIO_Port, AIN2_Pin) : LL_GPIO_ResetOutputPin(AIN2_GPIO_Port, AIN2_Pin))


void Servo_Init(void);
void Servo_SetSpeed(int8_t PWM);


#endif