
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"


//int main(void)
//{
//	//��GPIOB��ʱ��
//	RCC -> APB2ENR |= (0x01 << 3);
//	//���ö˿�Ϊ���
//	GPIOB -> CRL &= ~(0x0f << (4*5));
//	GPIOB -> CRL |= (0x01 << (4*5));
//	//����ODR�Ĵ���
//	GPIOB -> ODR &= ~(0x01 << 5);
//	//GPIOB -> ODR |= (0x01 << 5);
//}


int main(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC -> APB2ENR |= (0x01 << 3);
//	GPIOB -> CRL &= ~(0x0f << (4*1));
//	GPIOB -> CRL |= (0x01 << (4*1));
	GPIO_InitStruct.GPIO_Mode = GPIO_Pin1;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStruct);
	GPIO_ResetBits(GPIOB,GPIO_Pin1);
}

void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}



