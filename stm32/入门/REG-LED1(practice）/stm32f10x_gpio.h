#ifndef _STM32F10X_GPIO_H
#define _STM32F10X_GPIO_H
#include "stm32f10x.h"
void GPIO_SetBits(GPIO_Typedef* GPIOx,uint_16 GPIO_Pin);
void GPIO_ResetBits(GPIO_Typedef* GPIOx,uint_16 GPIO_Pin);
#endif //_STM32F10X_GPIO_H

