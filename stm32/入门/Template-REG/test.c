
#if 0
#include "stm32f10x.h"


int main(void)
{
	
}

void  SystemInit (void)
{
	//ʹ������������
}
#endif

int main(void)
{
	//��GPIOB�˿ڵ�ʱ��
	*(unsigned int*) 0x40021018 |= (1 << 3);
	//����I/O��Ϊ���
	*(unsigned int*) 0x40010C00 |= (1 << (4*5));
	//*(unsigned int*) 0x40010C00 |= (1 << (4*1));
	*(unsigned int*) 0x40010C00 |= (1 << (4*0));
	//����ODR�Ĵ���
	*(unsigned int*) 0x40010C0C &= ~(1 << 5);

}

void  SystemInit (void)
{
	//ʹ������������
}




