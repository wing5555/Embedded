#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b==2) + (e==4) == 1)
//							&& ((c==1) + (d==2) == 1)
//							&& ((c==5) + (d==3) == 1)
//							&& ((e==4) + (a==1) == 1)
//							)
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
//
//
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//	
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}
//
//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д����أ�
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = {0};
//	test(arr);//�����һ��ָ�������
//	printf("%d\n", a);//?
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	// 
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	return 0;
//}

//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int (*pf)(int, int) = &Add;
//
//	int (*pf)(int, int) = Add;//Add === pf
//	//int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//	// 
//	//int ret = * pf(3, 5);//err
//
//	//printf("%d\n", ret);
//
//	return 0;
//}


//0x0012ff48 - int


//int main()
//{
//	(*(void(*)())0)();
//
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//<c�����ȱ��>
//
//	return 0;
//}
//1
//void (* signal(int, void(*)(int) ) )(int);
////typedef - �����ͽ����ض���
//
////2
//typedef void(*pfun_t)(int) ;//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//pfun_t signal(int, pfun_t);

//typedef unsigned int uint;


//1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��
// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
// signal��һ������������


//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5];

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr���Ǻ���ָ������
//
//	return 0;
//}

//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. add    2. sub ****\n");
//	printf("**** 3. mul    4. div ****\n");
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}



//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. add    2. sub ****\n");
//	printf("**** 3. mul    4. div ****\n");
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - ��C��ָ�롷
//
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);//2
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//
//

//int  main()
//{
//	int arr[10];
//	//����Ԫ������ - int
//	//arr����������� int[10]
//
//	return 0;
//}





int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������2��������>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input = 0;
	//������-�������ͱ����ļӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();
	
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);//
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);//
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
		
	} while (input);
	return 0;
}
