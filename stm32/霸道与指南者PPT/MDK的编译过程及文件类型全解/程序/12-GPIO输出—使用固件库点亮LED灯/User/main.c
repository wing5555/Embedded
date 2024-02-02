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
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"
#include <stdlib.h>

#define SOFT_DELAY Delay(0x0FFFFF);

 uint8_t test[1024]={0,1,2,3,4,56,5};
// uint8_t test[1024]={0};

// 
// uint8_t test2=10;

void Delay(__IO u32 nCount); 

/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{	
	uint8_t testttt[50];
	
	
	uint8_t * p;
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();	 

	
	p = (uint8_t *) malloc(50);
	
	p[0] += 10;
	
	testttt[40] = 10;
//	test[5] +=90;
//	
	if(p[0] ==0 && testttt[40] == 11 &&test[10]==100)
	{
		LED1_ON;			  // ��		
	}
	
	free(p);
	
	while (1)
	{
		LED1_ON;			  // ��
		SOFT_DELAY;
		LED1_OFF;		   // ��

		LED2_ON;			 // ��
		SOFT_DELAY;
		LED2_OFF;		   // ��

		LED3_ON;			 // ��
		SOFT_DELAY;
		LED3_OFF;		   // ��	 

		/*������ʾ ������������� ��ɫ*/
		LED_RED;
		SOFT_DELAY;
		
		LED_GREEN;
		SOFT_DELAY;
		
		LED_BLUE;
		SOFT_DELAY;
		
		LED_YELLOW;
		SOFT_DELAY;
		
		LED_PURPLE;
		SOFT_DELAY;
				
		LED_CYAN;
		SOFT_DELAY;
		
		LED_WHITE;
		SOFT_DELAY;
		
		LED_RGBOFF;
		SOFT_DELAY;		
	}
}

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
