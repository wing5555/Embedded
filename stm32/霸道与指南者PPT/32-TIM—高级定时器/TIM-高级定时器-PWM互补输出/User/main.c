
#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_AdvanceTim.h"

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
  /*��ʼ��USART ����ģʽΪ 115200 8-N-1���жϽ���*/
  //USART_Config();
	
  /* �߼���ʱ����ʼ�� */
	ADVANCE_TIM_Init();
	
  while(1)
	{	
		
	}	
}

// 1- ��PWM�źŵ�Ƶ�ʸĳ�100KHZ

// 2- ʹ��ͨ�ö�ʱ�����4·ռ�ձȲ�ͬ��PWM�ź�

/*********************************************END OF FILE**********************/
