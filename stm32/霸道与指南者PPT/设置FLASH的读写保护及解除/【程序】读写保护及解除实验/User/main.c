/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   �����жϽ��ղ���
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
#include "bsp_usart.h"
#include "./key/bsp_key.h"  
#include "./protect/bsp_readWriteProtect.h"

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
  /*��ʼ��USART ����ģʽΪ 115200 8-N-1���жϽ���*/
  USART_Config();
	
	Key_GPIO_Config();
	
	/* ����һ���ַ��� */
	printf("��ӭʹ�ñ���STM32������\n\n\n\n");
	
//	printf("д����״̬��0x%08x\n\n\n\n",FLASH_GetWriteProtectionOptionByte());
	
	
	printf("������״̬��0x%x\n\n\n\n",FLASH_GetReadOutProtectionStatus());

	
  while(1)
	{	
		
		if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
		{
			printf("����ʵʩ д/�� ����\n\n\n\n");
			
//			Write_Protect();

			Read_Protect();
		
		
		}
		
		if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
		{
			printf("������� д/�� ����\n\n\n\n");
			
//			Write_Protect_Disable();

			Read_Protect_Disable();
		
		}

		
		
	}	
}
/*********************************************END OF FILE**********************/
