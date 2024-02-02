 /**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   LCD��ʾʵ��
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
#include "./usart/bsp_usart.h"
#include "./led/bsp_led.h"
#include "./lcd/bsp_ili9341_lcd.h"


//#define ILI9341_CMD_ADDR  		( uint16_t*)(0x60000000)
//#define ILI9341_DATA_ADDR  	( uint16_t*)(0x60020000)

extern uint16_t Read_Pixel_Format(void);

/*
 * ��������main
 * ����  ��������
 * ����  ����
 * ���  ����
 */
int main(void)
{ 	
	
//	uint32_t temp = 0x6C000000;
//	uint16_t lcd_read_temp;
	
	ILI9341_Init();
	
	LED_GPIO_Config();
	LED_BLUE;
	
	/* ���ô���Ϊ��115200 8-N-1 */
	USART_Config();
	printf("\r\n ����һ��LCDʵ�� \r\n");
	
	
	printf("\r\n0x0C�����ֵ���ԣ�0x%x",Read_Pixel_Format());
	ILI9341_Draw_Rec();
	
//	//��LCD��������
//	*ILI9341_CMD_ADDR = 0xABCD;
//	*( uint16_t*)(0x60000000) = 0xABCD;
//	
//	//��LCD��������
//	*ILI9341_DATA_ADDR = 0x1234;
//	*( uint16_t*)(0x60020000) = 0xABCD;
//	
//	//��Һ������ȡ����
//	lcd_read_temp = *ILI9341_DATA_ADDR;
//	lcd_read_temp = *( uint16_t*)(0x60020000);
//	
//	
//	
//	temp =temp | (1<<(23+1));	
//	
//	printf("\r\nA23Ϊ�ߵ�ƽ����ַ=0x%x",temp);
//	
//	temp = 0x6C000000;
//	
//	temp &=  ~(1<<(23+1));
//	
//	printf("\r\nA23Ϊ�͵�ƽ����ַ=0x%x",temp);

	while(1);  
}


void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
