#include "stm32f10x.h"


int main(void)
{
	while(1)
	{
	//��GPIOB��ʱ��
	RCC_APB2ENR |= (1 << 3);
	//����GPIOBΪ���
	GPIOB_CRL &= ~(0x0f << (4*1));
	GPIOB_CRL |= (1 << (4*1));
	//����GPIOB�˿����
	GPIOB_ODR &= ~(1 << 1);
	Sleep(1000);
	}
}

void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}

