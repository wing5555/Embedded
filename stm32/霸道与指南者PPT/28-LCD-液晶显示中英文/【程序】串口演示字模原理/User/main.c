/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ������ʾ��ģԭ��
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
#include "./lcd/bsp_ili9341_lcd.h"
#include "./usart/bsp_usart.h" 
#include <stdio.h>

static void LCD_Test(void);	
static void Delay ( __IO uint32_t nCount );
void Printf_Charater(void)   ;

void Display_char_test(void);
/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main ( void )
{

//	ILI9341_Init ();         //LCD ��ʼ��

	USART_Config();		
	
	printf("\r\n ********** ������ʾ��ģԭ��*********** \r\n"); 
	
		Display_char_test();

 //����0��3��5��6 ģʽ�ʺϴ���������ʾ���֣�
 //���Ƽ�ʹ������ģʽ��ʾ����	����ģʽ��ʾ���ֻ��о���Ч��			
 //���� 6 ģʽΪ�󲿷�Һ�����̵�Ĭ����ʾ����  
//  ILI9341_GramScan ( 6 );
	while ( 1 )
	{
//		LCD_Test();
	}
	
	
}




/*���ڲ��Ը���Һ���ĺ���*/
void LCD_Test(void)
{
	/*��ʾ��ʾ����*/
	static uint8_t testCNT = 0;	
	char dispBuff[100];
	
	testCNT++;	
	
	LCD_SetFont(&Font8x16);
	LCD_SetColors(RED,BLACK);

  ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);	/* ��������ʾȫ�� */
	/********��ʾ�ַ���ʾ��*******/
  ILI9341_DispStringLine_EN(LINE(0),"BH 3.2 inch LCD para:");
  ILI9341_DispStringLine_EN(LINE(1),"Image resolution:240x320 px");
  ILI9341_DispStringLine_EN(LINE(2),"ILI9341 LCD driver");
  ILI9341_DispStringLine_EN(LINE(3),"XPT2046 Touch Pad driver");
  
	/********��ʾ����ʾ��*******/
	LCD_SetFont(&Font16x24);
	LCD_SetTextColor(GREEN);

	/*ʹ��c��׼��ѱ���ת�����ַ���*/
	sprintf(dispBuff,"Count : %d ",testCNT);
  LCD_ClearLine(LINE(4));	/* ����������� */
	
	/*Ȼ����ʾ���ַ������ɣ���������Ҳ����������*/
	ILI9341_DispStringLine_EN(LINE(4),dispBuff);

	/*******��ʾͼ��ʾ��******/
	LCD_SetFont(&Font24x32);
  /* ��ֱ�� */
  
  LCD_ClearLine(LINE(4));/* ����������� */
	LCD_SetTextColor(BLUE);

  ILI9341_DispStringLine_EN(LINE(4),"Draw line:");
  
	LCD_SetTextColor(RED);
  ILI9341_DrawLine(50,170,210,230);  
  ILI9341_DrawLine(50,200,210,240);
  
	LCD_SetTextColor(GREEN);
  ILI9341_DrawLine(100,170,200,230);  
  ILI9341_DrawLine(200,200,220,240);
	
	LCD_SetTextColor(BLUE);
  ILI9341_DrawLine(110,170,110,230);  
  ILI9341_DrawLine(130,200,220,240);
  
  Delay(0xFFFFFF);
  
  ILI9341_Clear(0,16*8,LCD_X_LENGTH,LCD_Y_LENGTH-16*8);	/* ��������ʾȫ�� */
  
  
  /*������*/

  LCD_ClearLine(LINE(4));	/* ����������� */
	LCD_SetTextColor(BLUE);

  ILI9341_DispStringLine_EN(LINE(4),"Draw Rect:");

	LCD_SetTextColor(RED);
  ILI9341_DrawRectangle(50,200,100,30,1);
	
	LCD_SetTextColor(GREEN);
  ILI9341_DrawRectangle(160,200,20,40,0);
	
	LCD_SetTextColor(BLUE);
  ILI9341_DrawRectangle(170,200,50,20,1);
  
  
  Delay(0xFFFFFF);
	
	ILI9341_Clear(0,16*8,LCD_X_LENGTH,LCD_Y_LENGTH-16*8);	/* ��������ʾȫ�� */

  /* ��Բ */
  LCD_ClearLine(LINE(4));	/* ����������� */
	LCD_SetTextColor(BLUE);
	
  ILI9341_DispStringLine_EN(LINE(4),"Draw Cir:");

	LCD_SetTextColor(RED);
  ILI9341_DrawCircle(100,200,20,0);
	
	LCD_SetTextColor(GREEN);
  ILI9341_DrawCircle(100,200,10,1);
	
	LCD_SetTextColor(BLUE);
	ILI9341_DrawCircle(140,200,20,0);

  Delay(0xFFFFFF);
  
  ILI9341_Clear(0,16*8,LCD_X_LENGTH,LCD_Y_LENGTH-16*8);	/* ��������ʾȫ�� */

}


/**
  * @brief  ����ʱ����
  * @param  nCount ����ʱ����ֵ
  * @retval ��
  */	
static void Delay ( __IO uint32_t nCount )
{
  for ( ; nCount != 0; nCount -- );
	
}


uint8_t test_modul[] = 
{0x00,0xF8,0x3F,0x00,0x01,0x00,0x7F,0xFC,0x01,0x00,0x3F,
0xF8,0x01,0x08,0xFF,0xFE,0x01,0x08,0x3F,0xF8,0x03,0x80,0x05,0x40,
0x09,0x20,0x31,0x18,0xC1,0x06,0x01,0x00,/*"��",0*/
};


void Display_char_test(void)
{
	uint8_t row_count,byte_count,bit_count;
	
	for(row_count=0;row_count < 16;row_count++ )
	{
		printf("\n");
		for(byte_count=0;byte_count<2;byte_count++)
		{
			for(bit_count=0;bit_count<8;bit_count++)
			{
				if(test_modul[row_count*2+byte_count] & (0x80>>bit_count) )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}			
			}		
		}		
	}
	


}


/* ------------------------------------------end of file---------------------------------------- */

