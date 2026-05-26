#include "SCCB.h"

void SCCB_Init(void)
{
    LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* GPIO Ports Clock Enable */
    LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOA);

    
       
    GPIO_InitStruct.Pin = SCCB_SCL_PIN;
    GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
    LL_GPIO_Init(SCCB_SCL_PORT, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = SCCB_SDA_PIN;
    GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
    LL_GPIO_Init(SCCB_SDA_PORT, &GPIO_InitStruct);
     
    LL_GPIO_SetOutputPin(SCCB_SCL_PORT, SCCB_SCL_PIN);  // 对ODR寄存器置1
    LL_GPIO_SetOutputPin(SCCB_SDA_PORT, SCCB_SDA_PIN);

    SCCB_SDA_OUT();

}


void SCCB_Start(void) 
{
	SCCB_SDA=1;				//数据线高电平	   
	SCCB_SCL=1;				//在时钟线高的时候数据线由高至低
	dDelay_us(50);  
	SCCB_SDA=0;
	dDelay_us(50);	 
	SCCB_SCL=0;				//数据线恢复低电平，单操作函数必要	  
}


void SCCB_Stop(void)
{
	SCCB_SDA=0;
	dDelay_us(50);	 
	SCCB_SCL=1;	
	dDelay_us(50); 
	SCCB_SDA=1;	
	dDelay_us(50);
}  

void SCCB_No_Ack(void)    
{
	dDelay_us(50);
	SCCB_SDA=1;
	SCCB_SCL=1;
	dDelay_us(50);
	SCCB_SCL=0;
	dDelay_us(50);
	SCCB_SDA=0;
	dDelay_us(50);
}

uint8_t SCCB_WR_Byte(uint8_t data)
{
    uint8_t j ,res;
    for (  j = 0; j < 8; j++)
    {
        if (data & 0x80)
        {
            SCCB_SDA = 1;
        }
        else
        {
            SCCB_SDA = 0;
        }
        data << 1;
        dDelay_us(50);
        SCCB_SCL = 1;
        dDelay_us(50);
        SCCB_SCL = 0;
    }
    SCCB_SDA_IN();
    dDelay_us(50);
    SCCB_SCL=1;
    dDelay_us(50);
    if (SCCB_SDA_READ)res = 1;   
    else res = 0;
    SCCB_SCL = 0;
    SCCB_SDA_OUT();
    return res;
}