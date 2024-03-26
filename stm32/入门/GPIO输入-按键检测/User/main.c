#include "stm32f10x.h"
#include "bsp.h"
#include "bsp_key.h"

void Delay(uint32_t count)
{
	for(;count > 0;count--)
		;
}
int main(void)
{
	RCC_APB2PeriphClockCmd( LED_G_GPIO_CLK, ENABLE);
	LED_G_Config();
	LED_G(ON);
	
	RCC_APB2PeriphClockCmd( LED_B_GPIO_CLK, ENABLE);
	LED_B_Config();
	LED_B(OFF);
	
	RCC_APB2PeriphClockCmd( KEY1_GPIO_CLK|KEY2_GPIO_CLK, ENABLE);
	KEY1_Config();
	KEY2_Config();
	while(1)
	{
		if (KEY_CHECK(KEY1_GPIO_Port,KEY1_GPIO_Pin)==1)
		{
			LED_G_TOGGLE;
		}
		if (KEY_CHECK(KEY2_GPIO_Port,KEY2_GPIO_Pin)==1)
		{
			LED_B_TOGGLE;
		}
		
	}
}



