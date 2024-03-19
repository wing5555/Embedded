#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////#define GPIOB_ODR (unsigned int*)(GPIOB_BASE + 0x0C)
////* GPIOB_ODR = 0xFFFF;
//
//#include <stdio.h>
//int main()
//{
//	printf("haha");
//}

#define assert_param(expr) ((void)0)
int main()
{
	printf("%d\n", assert_param(5));
	return 0;
}