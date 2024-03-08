#include "stm32f10x.h"
int main(void)
{
  RCC -> APB2ENR |= (0x01 << 3);
	//配置端口为输出
	GPIOB -> CRL &= ~(0x0f << (4*5));
	GPIOB -> CRL |= (0x01 << (4*5));
	//控制ODR寄存器
	GPIOB -> ODR &= ~(0x01 << 5);
	//GPIOB -> ODR |= (0x01 << 0);
}

void SystemInit(void)
{
	// 函数体为空，目的是为了骗过编译器不报错
}

