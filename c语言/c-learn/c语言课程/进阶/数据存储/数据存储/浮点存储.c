#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int n = 9;//00000000000000000000000000001001  00 00 00 09
//	                                          //  09 00 00 00
//	float* pFloat = (float*)&n;//
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//void test(void)
//{
//	printf("haha");
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100
//	//00 00 00 14
//	int b = -10;
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111111010
//	//ff ff ff fe
//	return 0;
//}

//���һ�������жϵ�ǰ�������ֽ���
//int main()
//{
//	int a = 20;
//	char* pa = &a;
//	*pa = 0;
//	if (a == 0)
//		printf("С���ֽ���");
//	else
//		printf("����ֽ���");
//	return 0;
//}

//union data {
//    int n;
//    char ch;
//    short m;
//};
//int main() 
//{
//    union data a;
//    printf("%d, %d\n", sizeof(a), sizeof(union data));//4,4
//    a.n = 0x40;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);//40 ,@ ,40
//    a.ch = '9';
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);//9, , 9
//    a.m = 0x2059;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);//2059 Y 2059
//    a.n = 0x3E25AD54;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);//3E25AD54 T AD54
//
//    return 0;
//}

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//}

//int main()
//{
//	char a[1000];
//	int i;
//	int j;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


