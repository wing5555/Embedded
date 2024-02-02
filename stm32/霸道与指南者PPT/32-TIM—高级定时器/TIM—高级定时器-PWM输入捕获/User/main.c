
#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_GeneralTim.h"  
#include "bsp_AdvanceTim.h" 
#include "bsp_usart.h"

/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{	
	USART_Config();
	
	/* ͨ�ö�ʱ����ʼ�� */
	GENERAL_TIM_Init();
	
	/* �߼���ʱ����ʼ�� */
	ADVANCE_TIM_Init();
	
  while(1)
  {      
  }
}
/*********************************************END OF FILE**********************/
