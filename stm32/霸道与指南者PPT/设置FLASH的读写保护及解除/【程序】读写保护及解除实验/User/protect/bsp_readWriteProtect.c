/**
  ******************************************************************************
  * @file    bsp_usart.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ��д��������
	
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:����STM32 F103-ָ���� ������  
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 
	
#include "./protect/bsp_readWriteProtect.h"



void Write_Protect(void)
{

	FLASH_Unlock(); 
	
	FLASH_EraseOptionBytes();
	
	FLASH_EnableWriteProtection (FLASH_WRProt_AllPages );
	
	NVIC_SystemReset();

}


void Write_Protect_Disable(void)
{

	FLASH_Unlock(); 
	
	FLASH_EraseOptionBytes();
	
	FLASH_EnableWriteProtection (0x00000000 );
	
	NVIC_SystemReset();

}




void Read_Protect(void)
{

	FLASH_Unlock(); 
	
	FLASH_EraseOptionBytes();
	
	FLASH_ReadOutProtection (ENABLE );
	
//	NVIC_SystemReset();

}


void Read_Protect_Disable(void)
{

	FLASH_Unlock(); 
	
	FLASH_EraseOptionBytes();
	
	FLASH_ReadOutProtection (DISABLE );
	
//	NVIC_SystemReset();

}

	


