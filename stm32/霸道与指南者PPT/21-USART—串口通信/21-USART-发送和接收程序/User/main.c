/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ����led
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-�Ե� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_usart.h"



/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{	
  uint8_t a[10]={100,2,3,4,5,6,7,8,9,10};
	USART_Config();
	
//	Usart_SendByte(DEBUG_USARTx,'A');
//	Usart_SendHalfWord(DEBUG_USARTx, 0xff56);
//	
//	Usart_SendArray(DEBUG_USARTx, a,10);
//	Usart_SendStr(DEBUG_USARTx, "��ӭʹ�ñ���STM32F103������ \n");
	
	printf( "����printf��������\n" );
	
	while (1)
	{
	
	}
}
/*********************************************END OF FILE**********************/












