/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   SPI FLASH���ԣ�������Ϣͨ��USART1��ӡ�ڵ��Եĳ����ն�
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
#include "./led/bsp_led.h"
#include "./usart/bsp_usart.h"
#include "./flash/bsp_spi_flash.h"
#include <string.h>


uint8_t readBuff[4096];
uint8_t writeBuff[4096];
/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{ 
	
	uint32_t id;
	uint16_t i;
	
  LED_GPIO_Config();
  
  LED_BLUE;
  /* ���ڳ�ʼ�� */
	USART_Config();
	
	printf("\r\n ����һ��SPI-FLASH��д�������� \r\n");
	
	SPI_FLASH_Init();	 
 
  id = SPI_Read_ID();

	printf("\r\n id =0x%x \r\n",id);
	
	SPI_Erase_Sector(0);
	
	for(i=0;i<25;i++)
	{
		writeBuff[i]=i+25;
	}
	
	SPI_Write_Data(0,writeBuff,25);
	
	SPI_Read_Data(0,readBuff,4096);
	
	for(i=0;i<4096;i++)
	{
		printf("0x%x ",readBuff[i]);
		if(i%10==0)
			printf("\r\n");
	}
	
	
	
  while (1)
  {      
  }
}

/*********************************************END OF FILE**********************/
