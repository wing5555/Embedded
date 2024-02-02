/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   �����жϽ��ղ���
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
#include "bsp_usart.h"
#include "./485/bsp_485.h"
#include "./key/bsp_key.h"
#include "./led/bsp_led.h"   

//1.��ʼ��485�õĴ��ں� �շ���������
//2.��д�жϷ�����


uint8_t sendData = 'A' ;


/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
  /*��ʼ��USART ����ģʽΪ 115200 8-N-1���жϽ���*/
  USART_Config();
	
	RS485_USART_Config();
	
	Key_GPIO_Config();
	LED_GPIO_Config();
	
	LED_RED;
	
	/* ����һ���ַ��� */
	Usart_SendString( DEBUG_USARTx,"����һ�������жϽ��ջ���ʵ��\n");
	printf("��ӭʹ�ñ���STM32������\n\n\n\n");
	
  while(1)
	{	
		
		if(	Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON)
		{
			
			printf("\r\n��⵽�������£�׼����������");
			
			RS485_Usart_SendArray(RS485_USARTx,&sendData,1);
		}
		
		

		
	}	
}
/*********************************************END OF FILE**********************/
