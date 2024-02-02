/**
  ******************************************************************************
  * @file    bsp_usart.c
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ����������
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-�Ե� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 


#include "./touch/bsp_xpt2046_lcd.h"


 /**
  * @brief  ��������ʼ��
  * @param  ��
  * @retval ��
  */
void XP2046_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	// ��SPI GPIO��ʱ��
	RCC_APB2PeriphClockCmd(XPT2046_SPI_GPIO_CLK, ENABLE);	

	// ��CS CLK MOSI ��GPIO����Ϊ�������ģʽ
	GPIO_InitStructure.GPIO_Pin = XPT2046_SPI_CS_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(XPT2046_SPI_CS_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = XPT2046_SPI_CLK_PIN;
	GPIO_Init(XPT2046_SPI_CLK_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = XPT2046_SPI_MOSI_PIN;
	GPIO_Init(XPT2046_SPI_MOSI_PORT, &GPIO_InitStructure);		

  // ��PENIRQ MISO ��GPIO����Ϊ��������ģʽ
	GPIO_InitStructure.GPIO_Pin = XPT2046_SPI_MISO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(XPT2046_SPI_MISO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = XPT2046_PENIRQ_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(XPT2046_PENIRQ_GPIO_PORT, &GPIO_InitStructure);
		
}



/**
  * @brief  ���� XPT2046 �ļ�΢�뼶��ʱ����
  * @param  nCount ����ʱ����ֵ����λΪ΢��
  * @retval ��
  */	
static void XPT2046_DelayUS ( __IO uint32_t ulCount )
{
	uint32_t i;


	for ( i = 0; i < ulCount; i ++ )
	{
		uint8_t uc = 12;     //����ֵΪ12����Լ��1΢��  
	      
		while ( uc -- );     //��1΢��	

	}
	
}


//��������
void XPT2046_SendCMD(uint8_t cmd)	
{
	uint8_t i;
	
	/*�������ŵĳ�ʼ״̬*/
	XPT2046_CS_ENABLE();
	XPT2046_CLK_LOW();
	XPT2046_MOSI_0();
	
	/*Ƭѡѡ��*/
	XPT2046_DelayUS(10);
	XPT2046_CS_DISABLE();
	
	/*����8��ʱ�ӣ���������*/
	for(i=0;i<8;i++)
	{
		if( (cmd & (0x80>>i)) == 0 )
		{
			XPT2046_MOSI_0();
		}
		else
		{
			XPT2046_MOSI_1();		
		}		
		
		XPT2046_CLK_HIGH();		
		XPT2046_DelayUS(5);
			
		XPT2046_CLK_LOW();
		XPT2046_DelayUS(5);	
	}	
	
//	/*Ƭѡȡ��*/
//	XPT2046_CS_ENABLE();
	
}





//��ȡ����
uint16_t XPT2046_ReceiveData(void)	
{
	uint8_t i;
	
	uint16_t receive_temp=0;
	
//	/*�������ŵĳ�ʼ״̬*/
//	XPT2046_CS_ENABLE();
//	XPT2046_CLK_LOW();
//	XPT2046_MOSI_0();
//	
//	/*Ƭѡѡ��*/
//	XPT2046_DelayUS(10);
//	XPT2046_CS_DISABLE();
	
		XPT2046_CLK_HIGH();		
		XPT2046_DelayUS(5);
		XPT2046_CLK_LOW();
		XPT2046_DelayUS(5);	
	
	/*����12��ʱ�ӣ���ȡ����*/
	for(i=0;i < 12;i++)
	{		
		receive_temp = receive_temp << 1;

		XPT2046_CLK_HIGH();		
		XPT2046_DelayUS(5);
		
		
		if( XPT2046_MISO() == Bit_SET)
		{
			receive_temp |= 0x01;
		}
		else
		{
			receive_temp |= 0x00;		
		}				

			
		XPT2046_CLK_LOW();
		XPT2046_DelayUS(5);	
		

	}	
	
	/*Ƭѡȡ��*/
	XPT2046_CS_ENABLE();
	
	return receive_temp;
	
}





//�������״̬��
uint8_t touch_detect(void)
{
	static Touch_State touch_state = XPT2046_STATE_RELEASE; 
	static uint8_t i;
	uint8_t result;
	
	switch(touch_state)
	{
		case XPT2046_STATE_RELEASE:
						if(XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel)
						{
								touch_state = XPT2046_STATE_WAITING;
								result = TOUCH_NOT_PRESSED;
						}
						else
						{							
								touch_state = XPT2046_STATE_RELEASE;
								result = TOUCH_NOT_PRESSED;
						}						
		break;
		
		case XPT2046_STATE_WAITING:
				if(XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel)
						{
							i++;
							
							if(i>10)
							{
								touch_state = XPT2046_STATE_PRESSED;
								result = TOUCH_PRESSED;
							}		
							else
							{
								touch_state = XPT2046_STATE_WAITING;
								result = TOUCH_NOT_PRESSED;							
							}										
								
						}
						else
						{					
								i = 0;
								touch_state = XPT2046_STATE_RELEASE;
								result = TOUCH_NOT_PRESSED;
						}				
		
			break;
		
		case XPT2046_STATE_PRESSED:			
						if(XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel)
						{
								touch_state = XPT2046_STATE_PRESSED;
								result = TOUCH_PRESSED;
						}
						else
						{							
								touch_state = XPT2046_STATE_RELEASE;
								result = TOUCH_NOT_PRESSED;
						}	
			
			break;
	
	}
	
	return result;
}






