#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
void Delay(uint32_t n)
{
	while(n)
	{
		n--;
	}
}
int main(void)
{
  RCC -> APB2ENR |= (0x01 << 3);
	//���ö˿�Ϊ���
	//GPIOB -> CRL &= ~(0x0f << (4*0));
	//GPIOB -> CRL |= (0x01 << (4*0));
  GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_5;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
  GPIO_Init(GPIOB,&GPIO_InitStructure);

	//����ODR�Ĵ���
	//GPIOB -> ODR &= ~(0x01 << 5);
	//GPIOB -> ODR |= (0x01 << 0);
	//GPIOB -> ODR &= ~(0x01 << 5);
	while( 1 )
	{
	  GPIO_ResetBits(GPIOB ,GPIO_Pin_5);
		Delay(0xFFFF);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		Delay(0xFFFF);
	}
}
void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}

