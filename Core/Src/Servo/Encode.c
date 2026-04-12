#include "Encode.h"

#define Encode_TIME TIM3

void Encode_Init(void)
{
    LL_TIM_EnableCounter(Encode_TIME);
    LL_TIM_CC_EnableChannel(Encode_TIME, LL_TIM_CHANNEL_CH1);
    LL_TIM_CC_EnableChannel(Encode_TIME, LL_TIM_CHANNEL_CH2);
}

int16_t Encode_Get(void)
{
    int16_t temp;
    temp = LL_TIM_GetCounter(Encode_TIME);
    LL_TIM_SetCounter(Encode_TIME, 0);
    return temp;
}