/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   �������ԣ��ж�ģʽ/EXTIģʽ��
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 

#include "stm32f10x.h"
#include "bsp_led.h"
#include "./pvd/bsp_pvd.h" 


/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */ 
int main(void)
{
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();
	  	
	LED_GREEN;
	
	PVD_Config();
	

	while(1)                            
	{
	}
}
/*********************************************END OF FILE**********************/
