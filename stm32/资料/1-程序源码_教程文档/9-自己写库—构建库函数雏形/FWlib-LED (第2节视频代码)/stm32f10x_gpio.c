#include "stm32f10x_gpio.h"

/**
* �������ܣ���������Ϊ�ߵ�ƽ
* ����˵����GPIOx: �ò���Ϊ GPIO_TypeDef ���͵�ָ�룬ָ�� GPIO �˿ڵĵ�ַ
* GPIO_Pin: ѡ��Ҫ���õ� GPIO �˿����ţ�������� GPIO_Pin_0-15��
* ��ʾ GPIOx �˿ڵ� 0-15 �����š�
*/
void GPIO_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	
	/* ���� GPIOx �˿� BSRR �Ĵ����ĵ� GPIO_Pin λ��ʹ������ߵ�ƽ */
  /* ��Ϊ BSRR �Ĵ���д 0 ��Ӱ�죬�� GPIO_Pin ֻ�Ƕ�ӦλΪ 1������λ��Ϊ 0�����Կ���ֱ�Ӹ�ֵ */
	
	GPIOx->BSRR |= GPIO_Pin;
}



/**
* �������ܣ���������Ϊ�͵�ƽ
* ����˵����GPIOx: �ò���Ϊ GPIO_TypeDef ���͵�ָ�룬ָ�� GPIO �˿ڵĵ�ַ
* GPIO_Pin: ѡ��Ҫ���õ� GPIO �˿����ţ�������� GPIO_Pin_0-15��
* ��ʾ GPIOx �˿ڵ� 0-15 �����š�
*/
void GPIO_ResetBits( GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin )
{
	
	/* ���� GPIOx �˿� BRR �Ĵ����ĵ� GPIO_Pin λ, ʹ������͵�ƽ */
  /* ��Ϊ BRR �Ĵ���д 0 ��Ӱ�죬�� GPIO_Pin ֻ�Ƕ�ӦλΪ 1������λ��Ϊ 0�����Կ���ֱ�Ӹ�ֵ */
	
	GPIOx->BRR |= GPIO_Pin;
}

