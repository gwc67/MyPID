#ifndef __STORE_H
#define __STORE_H

#include "main.h"
#include "MyFlash.h"

// 我发现我这样的设计有一个致命的缺陷 ： 当那些变量不是以按键的形式来增大或者减少的时候，例如
// 直接通过电脑修改，或是ADC模拟时，可以发现flash中并没有存储它们的值，并且也占用了flash_Index 实在是浪费；

extern uint8_t flag;


extern uint16_t Store_Data[512];
void Store_Init(void);
void Store_Save(void);


#endif /* __STORE_H */