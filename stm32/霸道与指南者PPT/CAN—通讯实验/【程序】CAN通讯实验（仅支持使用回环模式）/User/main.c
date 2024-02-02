 /**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   CANͨѶʵ��
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
#include "./can/bsp_can.h"
#include "./key/bsp_key.h"  

CanRxMsg  CAN_Rece_Data;
CanTxMsg  CAN_Tran_Data;

uint8_t flag = 0;
 
 
void Delay(__IO uint32_t nCount); 

/*
 * ��������main
 * ����  ��������
 * ����  ����
 * ���  ����
 */
int main(void)
{ 	
	LED_GPIO_Config();
	LED_BLUE;
	
	/* ���ô���Ϊ��115200 8-N-1 */
	USART_Config();
	printf("\r\n ����һ��CANͨѶʵ�� \r\n");
	
	CAN_Config()	;   
	
	Key_GPIO_Config();
	printf("\r\n ��KEY1������������\r\n");
	
	while(1)
	{
		if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
		{
			uint8_t box;
			
			CAN_Tran_Data.StdId = 0;
			CAN_Tran_Data.ExtId = PASS_ID;
			CAN_Tran_Data.RTR = CAN_RTR_Data;
			CAN_Tran_Data.IDE = CAN_Id_Extended ;
			CAN_Tran_Data.DLC = 1;
			CAN_Tran_Data.Data[0] = 10;
			
			box = CAN_Transmit(CAN1,&CAN_Tran_Data);
			
			while(CAN_TransmitStatus(CAN1,box) == CAN_TxStatus_Failed);
						
			printf("\r\n ���ݰ��������\r\n");			
			
		} 		
		
		
		if(flag == 1)
		{
				printf("\r\n���յ������ݣ�%d\r\n",CAN_Rece_Data.Data[0]);
			  flag = 0;
		}
		else
		{
		
		}
	}
}

void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
