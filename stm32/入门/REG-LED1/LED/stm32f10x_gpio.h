#ifndef _STM32F10X_GPIO_H
#define _STM32F10X_GPIO_H
#include "stm32f10x.h"

//��λ
void GPIO_SetBits(GPIO_Typedef* GPIOx,uint16_t GPIO_Pin);


//��λ
void GPIO_ResetBits(GPIO_Typedef* GPIOx,uint16_t GPIO_Pin);


//GPIO����
#define GPIO_Pin0 (uint16_t)0x001
#define GPIO_Pin1 (uint16_t)0x002
#define GPIO_Pin2 (uint16_t)(1<<2)
#define GPIO_Pin3 (uint16_t)(1<<3)
#define GPIO_Pin4 (uint16_t)(1<<4)
#define GPIO_Pin5 (uint16_t)(1<<5)
#define GPIO_Pin6 (uint16_t)(1<<6)
#define GPIO_Pin7 (uint16_t)(1<<7)
#define GPIO_Pin8 (uint16_t)(1<<8)
#define GPIO_Pin9 (uint16_t)(1<<9)
#define GPIO_Pin10 (uint16_t)(1<<10)
#define GPIO_Pin11 (uint16_t)(1<<11)
#define GPIO_Pin12 (uint16_t)(1<<12)
#define GPIO_Pin13 (uint16_t)(1<<13)
#define GPIO_Pin14 (uint16_t)(1<<14)
#define GPIO_Pin15 (uint16_t)(1<<15)
#define GPIO_Pin16 (uint16_t)(1<<16)
#endif //_STM32F10X_GPIO_H


//��ʼ������
typedef struct
{
  uint16_t GPIO_Pin; /*!< ѡ��Ҫ���õ� GPIO ���� */
  uint16_t GPIO_Speed; /*!< ѡ�� GPIO ���ŵ����� */
  uint16_t GPIO_Mode; /*!< ѡ�� GPIO ���ŵĹ���ģʽ */
}GPIO_InitTypeDef;

//�����������
typedef enum
{
 GPIO_Speed_10MHz = 1, // 10MHZ (01)b
 GPIO_Speed_2MHz, // 2MHZ (10)b
 GPIO_Speed_50MHz // 50MHZ (11)b
}GPIOSpeed_TypeDef;

//���幤��ģʽ
typedef enum
{
 GPIO_Mode_AIN = 0x0, // ģ������ (0000 0000)b
 GPIO_Mode_IN_FLOATING = 0x04, // �������� (0000 0100)b
 GPIO_Mode_IPD = 0x28, // �������� (0010 1000)b
 GPIO_Mode_IPU = 0x48, // �������� (0100 1000)b
 GPIO_Mode_Out_OD = 0x14, // ��©��� (0001 0100)b
 GPIO_Mode_Out_PP = 0x10, // ������� (0001 0000)b
 GPIO_Mode_AF_OD = 0x1C, // ���ÿ�©��� (0001 1100)b
 GPIO_Mode_AF_PP = 0x18 // ����������� (0001 1000)b
}GPIOMode_TypeDef;

void GPIO_Init(GPIO_Typedef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);

