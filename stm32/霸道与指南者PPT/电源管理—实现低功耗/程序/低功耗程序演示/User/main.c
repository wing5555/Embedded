/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   �������ԣ��ж�ģʽ/EXTIģʽ��
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
#include "bsp_exti.h" 
#include "./usart/bsp_usart.h"


void Delay(__IO u32 nCount); 
static void SYSCLKConfig_STOP(void);


/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */ 
int main(void)
{
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();
	  	
	/* ��ʼ��EXTI�жϣ����°����ᴥ���жϣ�
  *  �����жϻ����stm32f4xx_it.c�ļ��еĺ���
	*  KEY1_IRQHandler��KEY2_IRQHandler�������жϣ���תLED�ơ�
	*/
//	EXTI_Key_Config(); 
	
	USART_Config();
	
	
	LED_BLUE;
	
	printf("\r\nִ��WFI���֮ǰ");
	
	Delay(0xFFF);
	
//˯��ģʽ	
//	__WFI();	
	
//ֹͣģʽ	
//	PWR_EnterSTOPMode(PWR_Regulator_ON,PWR_STOPEntry_WFI); 
//	//�ָ�HSEʱ��
//	SYSCLKConfig_STOP();
	
		
//����ģʽ	
//�������ģʽ���뿪��PWRʱ��
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR,ENABLE);
	
	PWR_WakeUpPinCmd (ENABLE);
	PWR_EnterSTANDBYMode();
		
		
	printf("\r\nִ��WFI���֮��");

	
	Delay(0xFFFFF);
	
	LED_RED;
	
	/* �ȴ��жϣ�����ʹ���жϷ�ʽ��CPU������ѯ���� */
	while(1)                            
	{
		printf("\r\nwhile�е�WFI���֮ǰ");
		Delay(0xFFF);
		
//˯��ģʽ	
//	__WFI();	
	
//ֹͣģʽ	
//	PWR_EnterSTOPMode(PWR_Regulator_ON,PWR_STOPEntry_WFI); 
//	//�ָ�HSEʱ��
//	SYSCLKConfig_STOP();
	
		


		printf("\r\nwhile�е�WFI���֮��");

	}
}


void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}



/**
  * @brief  ͣ�����Ѻ�����ϵͳʱ��: ʹ�� HSE, PLL
  *         ����ѡ��PLL��Ϊϵͳʱ��.
  * @param  None
  * @retval None
  */
static void SYSCLKConfig_STOP(void)
{
  /* After wake-up from STOP reconfigure the system clock */
  /* ʹ�� HSE */
  RCC_HSEConfig(RCC_HSE_ON);
  
  /* �ȴ� HSE ׼������ */
  while (RCC_GetFlagStatus(RCC_FLAG_HSERDY) == RESET)
  {
  }
  
  /* ʹ�� PLL */ 
  RCC_PLLCmd(ENABLE);
  
  /* �ȴ� PLL ׼������ */
  while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET)
  {
  }
  
  /* ѡ��PLL��Ϊϵͳʱ��Դ */
  RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);
  
  /* �ȴ�PLL��ѡ��Ϊϵͳʱ��Դ */
  while (RCC_GetSYSCLKSource() != 0x08)
  {
  }
}
/*********************************************END OF FILE**********************/
