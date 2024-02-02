/**
  ******************************************************************************
  * @file    bsp_exti.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   I/O���ж�Ӧ��bsp
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./pvd/bsp_pvd.h"


 /**
  * @brief  ���� PVD
  * @param  ��
  * @retval ��
  */
void PVD_Config(void)
{
	EXTI_InitTypeDef EXTI_InitStructure;
	
  NVIC_InitTypeDef NVIC_InitStructure;
	
	/*����PWR*/
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR,ENABLE);					

  
  /* ����NVICΪ���ȼ���1 */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);  
  /* �����ж�Դ������1 */
  NVIC_InitStructure.NVIC_IRQChannel = PVD_IRQn;
  /* ������ռ���ȼ� */
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
  /* ���������ȼ� */
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  /* ʹ���ж�ͨ�� */
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
		

	/* ѡ��EXTI���ź�Դ */
  EXTI_InitStructure.EXTI_Line = EXTI_Line16;	
	/* EXTIΪ�ж�ģʽ */
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	/* �������ж� */
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;
  /* ʹ���ж� */	
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  EXTI_Init(&EXTI_InitStructure);
	
	//3.3V���� �ĵ�ѹ����2.6V��������жϣ�����3.3V������STM32��VDDֱ������
	PWR_PVDLevelConfig(PWR_PVDLevel_2V6);
	
	PWR_PVDCmd(ENABLE);
	
	
}
/*********************************************END OF FILE**********************/
