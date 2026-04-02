#include "Encode.h"

void Encode_Init(void)
{
    LL_TIM_EnableCounter(TIM3);
    LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH1);
    LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH2);
}

int16_t Encode_Get(void)
{
    int16_t temp;
    temp = LL_TIM_GetCounter(TIM3);
    LL_TIM_SetCounter(TIM3, 0);
    return temp;
}