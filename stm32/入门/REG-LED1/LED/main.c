
#include "stm32f10x.h"


int main(void)
{
	//��GPIOB��ʱ��
	RCC -> APB2ENR |= (0x01 << 3);
	//���ö˿�Ϊ���
	GPIOB -> CRL &= ~(0x0f << (4*5));
	GPIOB -> CRL |= (0x01 << (4*5));
	//����ODR�Ĵ���
	GPIOB -> ODR &= ~(0x01 << 5);
	//GPIOB -> ODR |= (0x01 << 5);
}

void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}



