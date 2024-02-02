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
	uint8_t ch;
	USART_Config();
	LED_GPIO_Config();
	
	printf( "����һ�����ڿ���RGB�Ƶĳ���\n" );
 
	while (1)
	{
		ch = getchar();
	  printf( "ch=%c\n",ch );
		
		switch(ch)
   {
			case '1': LED_RED;
				break;
		 
			case '2': LED_GREEN;
			  break;
		 
			case '3': LED_BLUE;
			  break;
		 
			default: LED_RGBOFF;
		    break;
	 }
	}
}
/*********************************************END OF FILE**********************/












