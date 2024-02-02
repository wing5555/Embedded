/**
  ******************************************************************************
  * @file    bsp_i2c_ee.c
  * @author  STMicroelectronics
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   SPI-FLASH����
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 

#include "./flash/bsp_spi_flash.h"
#include "./usart/bsp_usart.h"		



static __IO uint32_t  SPITimeout = SPIT_LONG_TIMEOUT;     


static uint32_t SPI_TIMEOUT_UserCallback(uint8_t errorCode);


/**
  * @brief  SPII/O����
  * @param  ��
  * @retval ��
  */
static void SPI_GPIO_Config(void)
{
  GPIO_InitTypeDef  GPIO_InitStructure; 

	/* ʹ����SPI �йص�ʱ�� */
	FLASH_SPI_APBxClock_FUN ( FLASH_SPI_CLK, ENABLE );
	FLASH_SPI_GPIO_APBxClock_FUN ( FLASH_SPI_GPIO_CLK, ENABLE );
	
    
  /* MISO MOSI SCK*/
  GPIO_InitStructure.GPIO_Pin = FLASH_SPI_SCK_PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	       
  GPIO_Init(FLASH_SPI_SCK_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = FLASH_SPI_MOSI_PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	       
  GPIO_Init(FLASH_SPI_MOSI_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = FLASH_SPI_MISO_PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;	       
  GPIO_Init(FLASH_SPI_MISO_PORT, &GPIO_InitStructure);
	
	//��ʼ��CS���ţ�ʹ��������ƣ�����ֱ�����ó��������	
	GPIO_InitStructure.GPIO_Pin = FLASH_SPI_CS_PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	       
  GPIO_Init(FLASH_SPI_CS_PORT, &GPIO_InitStructure);
	
	FLASH_SPI_CS_HIGH;
}


/**
  * @brief  SPI ����ģʽ����
  * @param  ��
  * @retval ��
  */
static void SPI_Mode_Config(void)
{
  SPI_InitTypeDef  SPI_InitStructure; 

	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2 ;
	//SPI ʹ��ģʽ3
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge ;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_High ;
	SPI_InitStructure.SPI_CRCPolynomial = 0;//��ʹ��CRC���ܣ���ֵ���д
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex ;//˫��ȫ˫��
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB  ;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master  ;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft  ;	
	
	SPI_Init(FLASH_SPIx,&SPI_InitStructure);	//д�����õ��Ĵ���
	
	SPI_Cmd(FLASH_SPIx,ENABLE);//ʹ��SPI
	
}


/**
  * @brief  SPI ��ʼ��
  * @param  ��
  * @retval ��
  */
void SPI_FLASH_Init(void)
{
	
	SPI_GPIO_Config();
	SPI_Mode_Config();

}

//���Ͳ�����һ���ֽ�
uint8_t SPI_FLASH_Send_Byte(uint8_t data)
{
	SPITimeout = SPIT_FLAG_TIMEOUT;
	//��鲢�ȴ���TX������Ϊ��
	while(SPI_I2S_GetFlagStatus(FLASH_SPIx,SPI_I2S_FLAG_TXE) == RESET)
	{
		if((SPITimeout--) == 0) return SPI_TIMEOUT_UserCallback(0);
	}
	
	//����ִ�е��˴���TX�������ѿ�
	SPI_I2S_SendData (FLASH_SPIx,data);
	
	
	SPITimeout = SPIT_FLAG_TIMEOUT;
	//��鲢�ȴ���RX������Ϊ�ǿ�
	while(SPI_I2S_GetFlagStatus(FLASH_SPIx,SPI_I2S_FLAG_RXNE) == RESET)
	{
		if((SPITimeout--) == 0) return SPI_TIMEOUT_UserCallback(0);
	}
		
	//����ִ�е��˴���˵�����ݷ�����ϣ������յ�һ���ֽ�	
	return SPI_I2S_ReceiveData(FLASH_SPIx); 

}

uint8_t SPI_FLASH_Read_Byte(void)
{
	return SPI_FLASH_Send_Byte(DUMMY); 
}



//��ȡID��
uint32_t SPI_Read_ID(void)
{
	uint32_t flash_id;
	
	//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	SPI_FLASH_Send_Byte(READ_JEDEC_ID);
	
	flash_id = SPI_FLASH_Send_Byte(DUMMY);

	flash_id <<= 8;
	
	flash_id |= SPI_FLASH_Send_Byte(DUMMY); 
	
	flash_id <<= 8;
	
	flash_id |= SPI_FLASH_Send_Byte(DUMMY); 
	
	FLASH_SPI_CS_HIGH;	
	
	return flash_id;
}

//FLASHд��ʹ��
void SPI_Write_Enable(void)
{
		//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	SPI_FLASH_Send_Byte(WRITE_ENABLE);	 
	FLASH_SPI_CS_HIGH;	
}



//����FLASHָ������
void SPI_Erase_Sector(uint32_t addr)
{	
	SPI_Write_Enable();
		//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	SPI_FLASH_Send_Byte(ERASE_SECTOR);
	
	SPI_FLASH_Send_Byte((addr>>16)&0xff);
	
	SPI_FLASH_Send_Byte((addr>>8)&0xff); 
	
  SPI_FLASH_Send_Byte(addr&0xff); 
	
	FLASH_SPI_CS_HIGH;	
	
	SPI_WaitForWriteEnd();
	
}


//��ȡFLASH������
void SPI_Read_Data(uint32_t addr,uint8_t *readBuff,uint32_t numByteToRead)
{
		//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	SPI_FLASH_Send_Byte(READ_DATA);
	
	SPI_FLASH_Send_Byte((addr>>16)&0xff);
	
	SPI_FLASH_Send_Byte((addr>>8)&0xff); 
	
  SPI_FLASH_Send_Byte(addr&0xff); 
	
	while(numByteToRead--)
	{	
		*readBuff = SPI_FLASH_Send_Byte(DUMMY);
		readBuff++;
	}
	
	
	FLASH_SPI_CS_HIGH;	
	
}




//��FLASHд������
//��ȡFLASH������
void SPI_Write_Data(uint32_t addr,uint8_t *writeBuff,uint32_t numByteToWrite)
{
	SPI_Write_Enable();
		//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	SPI_FLASH_Send_Byte(WRITE_DATA);
	
	SPI_FLASH_Send_Byte((addr>>16)&0xff);
	
	SPI_FLASH_Send_Byte((addr>>8)&0xff); 
	
  SPI_FLASH_Send_Byte(addr&0xff); 
	
	while(numByteToWrite--)
	{	
		SPI_FLASH_Send_Byte(*writeBuff);
		writeBuff++;
	}
	
	
	FLASH_SPI_CS_HIGH;	
	SPI_WaitForWriteEnd();
}



//�ȴ�FLASH�ڲ�ʱ��������
void SPI_WaitForWriteEnd(void)
{
	uint8_t status_reg = 0;
	
	//Ƭѡʹ��
	FLASH_SPI_CS_LOW;
	
	SPI_FLASH_Send_Byte(READ_STATUS);
	
	do
	{	
	status_reg = SPI_FLASH_Send_Byte(DUMMY);
	}
	while((status_reg & 0x01) == 1);
	
	FLASH_SPI_CS_HIGH;	


}



/**
  * @brief  Basic management of the timeout situation.
  * @param  errorCode��������룬����������λ���ĸ����ڳ���.
  * @retval ����0����ʾSPI��ȡʧ��.
  */
static  uint32_t SPI_TIMEOUT_UserCallback(uint8_t errorCode)
{
  /* Block communication and all processes */
  FLASH_ERROR("SPI �ȴ���ʱ!errorCode = %d",errorCode);
  
  return 0;
}
/*********************************************END OF FILE**********************/

