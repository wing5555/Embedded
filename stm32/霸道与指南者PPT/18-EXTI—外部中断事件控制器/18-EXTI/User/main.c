#include "stm32f10x.h"   // �൱��51��Ƭ���е�  #include <reg51.h>
#include "bsp_led.h"

#include "bsp_exti.h"

void Delay( uint32_t count )
{
	for(; count!=0; count--);
}

int main(void)
{
	// ���������ʱ��ϵͳ��ʱ���Ѿ������ó�72M��
	LED_GPIO_Config();
	
	EXIT_Key_Config();

	while(1)
	{

	}
}

// ��ҵ

// 1- ��KEY2-PC13 Ҳ�� EXTI �ķ�ʽʵ��

// 2- ��� PA0 PB0 PC0 �����ӵ� EXTI0 ��ʱ����ô�죿
// GPIOA->IDR  GPIOB->IDR 

// 3- �Ѹ�Ӳ����ص�GPIO��ͨ���궨����ʵ��