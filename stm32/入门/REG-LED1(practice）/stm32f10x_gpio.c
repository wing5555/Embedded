#include "stm32f10x_gpio.h"
//��λ����
void GPIO_SetBits(GPIO_Typedef* GPIOx,uint_16 GPIO_Pin)
{
	GPIOx ->BSRR = GPIO_Pin;
}

void GPIO_ResetBits(GPIO_Typedef* GPIOx,uint_16 GPIO_Pin)
{
	GPIOx -> BRR = GPIO_Pin;
}



