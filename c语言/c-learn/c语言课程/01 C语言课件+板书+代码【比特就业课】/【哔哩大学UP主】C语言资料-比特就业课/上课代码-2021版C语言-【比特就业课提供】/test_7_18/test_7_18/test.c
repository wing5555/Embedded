#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct  enum
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u = {10};
//	u.i = 1000;
//	u.c = 100;
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	//printf("%d\n", sizeof(u));//
//
//	return 0;
//}

//�жϵ�ǰ������Ĵ�С�˴洢


//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//С��
//	}
//	else
//	{
//		return 0;//���
//	}
//}
//
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1 ����С��
//	//����0 ���Ǵ��
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}
//
//union Un
//{
//	char a[5];//1    5
//	//int i;//4
//	char c;//1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}
//
//union Un
//{
//	short s[5];// 2 10
//	int a;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}

//��̬�ڴ濪��
#include <stdlib.h>
//
//int main()
//{
//	//���迪��10�����εĿռ� - 10* sizeof(int)
//	//int arr[10];//ջ��
//	
//	//��̬�ڴ濪�ٵ�
//	int* p = (int*)malloc(1000000000*sizeof(int));//void*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		//printf  + strerror
//		perror("main");//main: xxxxxxxxx
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//���տռ�
//	free(p);
//	p = NULL;//�Լ����ְ�p��ΪNULL
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);//err
//
//	return 0;
//}
//
//int main()
//{
//	//int*p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//
//	if (p == NULL)
//		return 1;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//������Ҫpָ��Ŀռ������Ҫ20��int�Ŀռ�
//	//realloc�����ռ�
//
//	int*ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//


int main()
{
	int* p = (int*)realloc(NULL, 40);//���﹦��������malloc������ֱ���ڶ�������40���ֽ�

	return 0;
}