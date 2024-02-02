#ifndef __USART_H
#define	__USART_H


#include "stm32f10x.h"
#include <stdio.h>

/** 
  * ���ں궨�壬��ͬ�Ĵ��ڹ��ص����ߺ�IO��һ������ֲʱ��Ҫ�޸��⼸����
	* 1-�޸�����ʱ�ӵĺ꣬uart1���ص�apb2���ߣ�����uart���ص�apb1����
	* 2-�޸�GPIO�ĺ�
  */
	
// ����1-USART1
#define  USARTx                   USART1
#define  USART_CLK                RCC_APB2Periph_USART1
#define  USART_APBxClkCmd         RCC_APB2PeriphClockCmd
#define  USART_BAUDRATE           115200

// USART GPIO ���ź궨��
#define  USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
#define  USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  USART_TX_GPIO_PORT         GPIOA   
#define  USART_TX_GPIO_PIN          GPIO_Pin_9
#define  USART_RX_GPIO_PORT       GPIOA
#define  USART_RX_GPIO_PIN        GPIO_Pin_10

#define  USART_IRQ                USART1_IRQn
#define  USART_IRQHandler         USART1_IRQHandler


// ����2-USART2
//#define  USARTx                   USART2
//#define  USART_CLK                RCC_APB1Periph_USART2
//#define  USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
//#define  USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  USART_TX_GPIO_PORT         GPIOA   
//#define  USART_TX_GPIO_PIN          GPIO_Pin_2
//#define  USART_RX_GPIO_PORT       GPIOA
//#define  USART_RX_GPIO_PIN        GPIO_Pin_3

//#define  USART_IRQ                USART2_IRQn
//#define  USART_IRQHandler         USART2_IRQHandler

// ����3-USART3
//#define  USARTx                   USART3
//#define  USART_CLK                RCC_APB1Periph_USART3
//#define  USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  USART_GPIO_CLK           (RCC_APB2Periph_GPIOB)
//#define  USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  USART_TX_GPIO_PORT         GPIOB   
//#define  USART_TX_GPIO_PIN          GPIO_Pin_10
//#define  USART_RX_GPIO_PORT       GPIOB
//#define  USART_RX_GPIO_PIN        GPIO_Pin_11

//#define  USART_IRQ                USART3_IRQn
//#define  USART_IRQHandler         USART3_IRQHandler

// ����4-UART4
//#define  USARTx                   UART4
//#define  USART_CLK                RCC_APB1Periph_UART4
//#define  USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  USART_GPIO_CLK           (RCC_APB2Periph_GPIOC)
//#define  USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  USART_TX_GPIO_PORT         GPIOC   
//#define  USART_TX_GPIO_PIN          GPIO_Pin_10
//#define  USART_RX_GPIO_PORT       GPIOC
//#define  USART_RX_GPIO_PIN        GPIO_Pin_11

//#define  USART_IRQ                UART4_IRQn
//#define  USART_IRQHandler         UART4_IRQHandler


// ����5-UART5
//#define  USARTx                   UART5
//#define  USART_CLK                RCC_APB1Periph_UART5
//#define  USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  USART_GPIO_CLK           (RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD)
//#define  USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  USART_TX_GPIO_PORT         GPIOC   
//#define  USART_TX_GPIO_PIN          GPIO_Pin_12
//#define  USART_RX_GPIO_PORT       GPIOD
//#define  USART_RX_GPIO_PIN        GPIO_Pin_2

//#define  USART_IRQ                UART5_IRQn
//#define  USART_IRQHandler         UART5_IRQHandler


void USART_Config(void);
void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);

#endif /* __USART_H */
