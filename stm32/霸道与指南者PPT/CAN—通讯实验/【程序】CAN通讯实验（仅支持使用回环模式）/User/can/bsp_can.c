 /**
  ******************************************************************************
  * @file    bsp_xxx.c
  * @author  STMicroelectronics
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   CAN����
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./can/bsp_can.h"


//1.��ʼ��CAN���衢�����ʣ�λ�����
//2.����ɸѡ���������������
//3.�������ݣ������գ�ʹ�ûػ�ģʽ����


/**
  * @brief  CAN_GPIO_Config��ʼ��
  * @param  ��
  * @retval ��
  */
void CAN_GPIO_Config(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
	
	/* ʹ��CANʱ�� */
	RCC_APB1PeriphClockCmd (RCC_APB1Periph_CAN1 , ENABLE );
	
	/* ʹ��CAN������ص�ʱ�� */
 	RCC_APB2PeriphClockCmd ( CAN_GPIO_CLK|RCC_APB2Periph_AFIO, ENABLE );
	
	//ʹ��PA8 9���ŵĵڶ�����
	GPIO_PinRemapConfig (GPIO_Remap1_CAN1 ,ENABLE);
	
  /* ����CAN�� ���ţ���ͨIO���� */
  GPIO_InitStructure.GPIO_Pin = CAN_TX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
  GPIO_Init(CAN_TX_GPIO_PROT, &GPIO_InitStructure);
	
	  /* ����CAN�� ���ţ���ͨIO���� */
  GPIO_InitStructure.GPIO_Pin = CAN_RX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
  GPIO_Init(CAN_RX_GPIO_PORT, &GPIO_InitStructure);
	
}


void CAN_Mode_Config(void)	
{

	CAN_InitTypeDef CAN_InitTypeStruct;
	
	CAN_InitTypeStruct.CAN_ABOM = ENABLE;
	CAN_InitTypeStruct.CAN_AWUM = ENABLE;
	CAN_InitTypeStruct.CAN_Mode = CAN_Mode_LoopBack;//CAN_Mode_Normal;//����ʱ����ʹ�ûػ�ģʽ���������ٸĳ�NORMAL
	CAN_InitTypeStruct.CAN_NART = ENABLE; //�����ش�
	CAN_InitTypeStruct.CAN_RFLM = ENABLE;
	CAN_InitTypeStruct.CAN_TTCM = DISABLE;
	CAN_InitTypeStruct.CAN_TXFP = DISABLE; //��ID���ȼ�����
	
	//���ó�1Mbps
	CAN_InitTypeStruct.CAN_BS1 = CAN_BS1_5tq;
	CAN_InitTypeStruct.CAN_BS2 = CAN_BS2_3tq;
	CAN_InitTypeStruct.CAN_SJW = CAN_SJW_2tq;
	CAN_InitTypeStruct.CAN_Prescaler = 4;
	
	
	CAN_Init(CAN1,&CAN_InitTypeStruct);

}



void CAN_Filter_Config(void)
{
	CAN_FilterInitTypeDef CAN_FilterInitTypeStruct;
	
	CAN_FilterInitTypeStruct.CAN_FilterActivation = ENABLE;
	CAN_FilterInitTypeStruct.CAN_FilterFIFOAssignment = CAN_Filter_FIFO0  ;
	CAN_FilterInitTypeStruct.CAN_FilterNumber = 0;
	CAN_FilterInitTypeStruct.CAN_FilterScale = CAN_FilterScale_32bit;
	CAN_FilterInitTypeStruct.CAN_FilterMode = CAN_FilterMode_IdMask  ;
	
	CAN_FilterInitTypeStruct.CAN_FilterIdHigh = ((PASS_ID<<3 |CAN_Id_Extended |CAN_RTR_Data)&0xFFFF0000)>>16;
	CAN_FilterInitTypeStruct.CAN_FilterIdLow = ((PASS_ID<<3 |CAN_Id_Extended |CAN_RTR_Data)&0xFFFF);
	
	CAN_FilterInitTypeStruct.CAN_FilterMaskIdHigh = 0xFFFF;
	CAN_FilterInitTypeStruct.CAN_FilterMaskIdLow =0xFFFF;	

	CAN_FilterInit(&CAN_FilterInitTypeStruct);
	
	CAN_ITConfig (CAN1,CAN_IT_FMP0,ENABLE);
	
}	

void CAN_NVIC_Config(void)
{

	NVIC_InitTypeDef NVIC_InitStructure;
  
  /* ����NVICΪ���ȼ���1 */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
  

  NVIC_InitStructure.NVIC_IRQChannel = USB_LP_CAN1_RX0_IRQn;
  /* ������ռ���ȼ� */
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
  /* ���������ȼ� */
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  /* ʹ���ж�ͨ�� */
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
}


void CAN_Config(void)	
{
	CAN_GPIO_Config();
  CAN_Mode_Config();
	CAN_Filter_Config();
	CAN_NVIC_Config();
	
	
}
   
/*********************************************END OF FILE**********************/
