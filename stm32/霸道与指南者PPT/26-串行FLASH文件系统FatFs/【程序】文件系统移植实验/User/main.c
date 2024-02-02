 /**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   FATFS�ļ�ϵͳ��ֲ
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
#include "./flash/bsp_spi_flash.h"
#include "ff.h"			


FATFS fsObject;
FIL fp; 
const char wData[]="��ӭʹ�ñ��𿪷��壡";
char rData[4096]="";


UINT bw;
UINT br;

/*
 * ��������main
 * ����  ��������
 * ����  ����
 * ���  ����
 */
int main(void)
{ 	
	FRESULT res;
	
	LED_GPIO_Config();
	LED_BLUE;
	
	/* ���ô���Ϊ��115200 8-N-1 */
	USART_Config();
	printf("\r\n ����һ��FATFS�ļ�ϵͳ��ֲʵ�� \r\n");
	
	//�����ļ�ϵͳ
	res = f_mount(&fsObject,"1:",1);

	printf("\r\nf_mount res =%d",res);
	
	if(res == FR_NO_FILESYSTEM)
	{
		res = f_mkfs("1:",0,0);
		printf("\r\nf_mkfs res =%d",res);
		//��ʽ����Ҫȡ�����������¹����ļ�ϵͳ
		res = f_mount(NULL,"1:",1);
		res = f_mount(&fsObject,"1:",1);
		
		printf("\r\nsecond f_mount res =%d",res);
	}

	
	res = f_open(&fp,"1:�����ļ���abcdefgadfasd.txt",FA_OPEN_ALWAYS|FA_READ|FA_WRITE);
	printf("\r\nf_open res =%d",res);
	
	if(res == FR_OK)
	{
		res = f_write(&fp,wData,sizeof(wData),&bw);
		printf ("\r\nbw= %d",bw);		

		if(res == FR_OK)
		{
			f_lseek(&fp,0);
			res = f_read (&fp,rData,f_size(&fp),&br);
			if(res == FR_OK)
				printf ("\r\n�ļ����ݣ�%s br= %d",rData,br);		
		}	
		
		f_close(&fp);
	
	}
	

	while(1);  
}


void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
