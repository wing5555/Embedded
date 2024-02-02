/**
  ******************************************************************************
  * @file    FSMC���ⲿSRAM
  * @author  fire
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   sramӦ������
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-�Ե� STM32  ������  
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */

#include "stm32f10x.h"
#include "./usart/bsp_usart.h"
#include "./led/bsp_led.h"  
#include "./sram/sram.h"
#include <stdlib.h>


uint32_t testValue =129;

uint8_t testGrup[20]={45,65,78,54,121};


#define __EXRAM  __attribute__((section("EXRAM")))

//__attribute__((section("EXRAM")))
uint8_t EXtestGrup[1024] __attribute__((section("EXRAM"))) ={43,32,3};

uint8_t EXtestGrup2[1024] __EXRAM ={56,56,65,11,};





 /**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
 int main(void)
 {	   


	uint8_t inerTestValue=19;
	uint8_t *p;
	
	
	testValue ++;
	testGrup[0]++;
	EXtestGrup[0]++;
	EXtestGrup2[0]++;
	inerTestValue++;
	 
	 
	LED_GPIO_Config();
	//���ڳ�ʼ��  
	Debug_USART_Config();		 	                       
	     
	 
	printf ( "\r\n�����ⲿ SRAM ����\r\n" );
	 
	 
	p = (uint8_t *)malloc(20);
	
	*p = 50;
	
	
	printf("\r\ntestValueֵ��%d,��ַ��0x%x",testValue,(uint32_t)&testValue);
	
	printf("\r\ntestGrupֵ��%d,��ַ��0x%x",testGrup[0],(uint32_t)&testGrup);
	
	printf("\r\ninerTestValueֵ��%d,��ַ��0x%x",inerTestValue,(uint32_t)&inerTestValue);
	
	printf("\r\nEXtestGrupֵ��%d,��ַ��0x%x",EXtestGrup[0],(uint32_t)&EXtestGrup);

	printf("\r\nEXtestGrup2ֵ��%d,��ַ��0x%x",EXtestGrup2[0],(uint32_t)&EXtestGrup2);
	
	printf("\r\nmalloc �ռ�洢��ֵ��%d,��ַ��0x%x",*p,(uint32_t)p);


	 
	 
	  	
  while(1);
	 
	 
}


/*********************************************END OF FILE**********************/
