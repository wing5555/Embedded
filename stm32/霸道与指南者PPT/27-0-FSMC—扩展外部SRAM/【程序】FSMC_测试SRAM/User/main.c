 /**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   SRAM����
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-�Ե� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 
#include "stm32f10x.h"
#include "./usart/bsp_usart.h"
#include "./led/bsp_led.h"
#include "./sram/bsp_sram.h"

//1.ʹ��ָ���SRAM���ж�д
//2.ʹ�þ��Ե�ַ�ķ�ʽ����SRAM

//ʹ��__attribute__�������ʱ����Ҫ����Ϊȫ�ֱ���
uint8_t testValue __attribute__ ((at (SRAM_BASE_ADDR+0x40))) ;




/**
  * @brief  ����SRAM�Ƿ����� 
  * @param  None
  * @retval ��������1���쳣����0
  */
uint8_t SRAM_Test(void)
{
  /*д�����ݼ�����*/
  uint32_t counter=0;
  
  /* 8λ������ */
  uint8_t ubWritedata_8b = 0, ubReaddata_8b = 0;  
  
  /* 16λ������ */
  uint16_t uhWritedata_16b = 0, uhReaddata_16b = 0; 
  
  printf("���ڼ��SRAM����8λ��16λ�ķ�ʽ��дsdram...");


  /*��8λ��ʽ��д���ݣ���У��*/
  
  /* ��SRAM����ȫ������Ϊ0 ��IS62WV51216_SIZE����8λΪ��λ�� */
  for (counter = 0x00; counter < SRAM_SIZE; counter++)
  {
    *(__IO uint8_t*) (SRAM_BASE_ADDR + counter) = (uint8_t)0x0;
  }
  
  /* ������SRAMд������  8λ */
  for (counter = 0; counter < SRAM_SIZE; counter++)
  {
    *(__IO uint8_t*) (SRAM_BASE_ADDR + counter) = (uint8_t)(ubWritedata_8b + counter);
  }
  
  /* ��ȡ SRAM ���ݲ����*/
  for(counter = 0; counter<SRAM_SIZE;counter++ )
  {
    ubReaddata_8b = *(__IO uint8_t*)(SRAM_BASE_ADDR + counter);  //�Ӹõ�ַ��������
    
    if(ubReaddata_8b != (uint8_t)(ubWritedata_8b + counter))      //������ݣ�������ȣ���������,���ؼ��ʧ�ܽ����
    {
      printf("8λ���ݶ�д����");
      return 0;
    }
  }
	
  
  /*��16λ��ʽ��д���ݣ������*/
  
  /* ��SRAM����ȫ������Ϊ0 */
  for (counter = 0x00; counter < SRAM_SIZE/2; counter++)
  {
    *(__IO uint16_t*) (SRAM_BASE_ADDR + 2*counter) = (uint16_t)0x00;
  }
  
  /* ������SRAMд������  16λ */
  for (counter = 0; counter < SRAM_SIZE/2; counter++)
  {
    *(__IO uint16_t*) (SRAM_BASE_ADDR + 2*counter) = (uint16_t)(uhWritedata_16b + counter);
  }
  
    /* ��ȡ SRAM ���ݲ����*/
  for(counter = 0; counter<SRAM_SIZE/2;counter++ )
  {
    uhReaddata_16b = *(__IO uint16_t*)(SRAM_BASE_ADDR + 2*counter);  //�Ӹõ�ַ��������
    
    if(uhReaddata_16b != (uint16_t)(uhWritedata_16b + counter))      //������ݣ�������ȣ���������,���ؼ��ʧ�ܽ����
    {
      printf("16λ���ݶ�д����");

      return 0;
    }
  }
  
  printf("SRAM��д����������"); 
  /*���������return 1 */
  return 1;

}


/*
 * ��������main
 * ����  ��������
 * ����  ����
 * ���  ����
 */
int main(void)
{ 	
	uint8_t *p; 
	uint16_t *p16; 
	float *pf; 
//	uint8_t temp;
	
	LED_GPIO_Config();
	LED_BLUE;
	
	/* ���ô���Ϊ��115200 8-N-1 */
	USART_Config();
	printf("\r\n ����һ��SRAM����ʵ�� \r\n");	
	SRAM_Init();
	
	//������ǿ��ת����ָ��
	p = (uint8_t *)SRAM_BASE_ADDR; 
	
	*p = 0xAB;	
	
	
//	temp = *p;
	
	printf("\r\n��������������Ϊ��0x%x\r\n",*p);
	
	p16 = (uint16_t *)(SRAM_BASE_ADDR+10); 
	
	*p16 = 0xcdef;
	
	printf("\r\n��������������Ϊ��0x%x\r\n",*p16);
	
	
	pf = (float *)(SRAM_BASE_ADDR+20); 
	
	*pf = 56.35;
	
	printf("\r\n��������������Ϊ��0x%.2f\r\n",*pf);

	testValue = 50;
	
	printf("testValue =%d,testValue addr = 0x%x ",testValue,(unsigned int)&testValue);
	
	
	SRAM_Test();
	
	while(1);  
}





/*********************************************END OF FILE**********************/
