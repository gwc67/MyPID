#ifndef __SCCB_H
#define __SCCB_H

#include "main.h"
#include "sys.h"

#define SCCB_SCL_PORT       GPIOA
#define SCCB_SCL_PIN        GPIO_PIN_0
#define SCCB_SDA_PORT       GPIOA
#define SCCB_SDA_PIN        GPIO_PIN_1

#define 

#define SCCB_SDA_IN()       {GPIOA->CRL &= 0xFFFFFF0F;GPIO->CRL |= 0x00000080;}
#define SCCB_SDA_OUT()      {GPIOA->CRL &= 0xFFFFFF0F;GPIO->CRL |= 0x00000030;}    

#define SCCB_SCL            PAout(0)
#define SCCB_SDA            PAout(1)     

#define SCCB_SDA_READ       PAin(1)
#define SCCB_ID             42
#endif