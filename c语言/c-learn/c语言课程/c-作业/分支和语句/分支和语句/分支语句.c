#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;//�������
//	int d = 0;//��ų�ʼa
//	int e = 0;//��ų�ʼb
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//	d = a;//�ݴ�a��b��Ϊ�������ʾa��b�����Լ���ṩ����
//	e = b;
//	while(b!=0)//ͨ��շת�����ʵ�����������
//	{
//		c = a % b;
//		if (c == 0)
//		{
//			printf("%d��%d���������Ϊ��%d",d,e,b);
//			break;
//		}
//		a = b;//�ദ��b����������ֵ��a������������c����������ֵ��b
//		b = c;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a ,&b,&c);
//	if (a <= b)
//	{
//		d = b;
//		b = a;
//		a = d;
//		if (b <= c)
//		{
//			d = c;
//			c = b;
//			b = d;
//			if (a <= b)
//			{
//				d = b;
//				b = a;
//				a = d;
//			}
//		}
//	}
//	else
//	{
//		if (b <= c)
//		{
//			d = c;
//			c = b;
//			b = d;
//			if (a <= b)
//			{
//				d = b;
//				b = a;
//				a = d;
//			}
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()//ͨ��a��b��a��c��b��c�ıȽϺ͵���λ��ʵ��abc�Ӵ�С����
//{
//	int a = 0;//a��b��cb�Ƚϴ�С
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int tmp = 0;//�м���������Դ���abc��ֵ��tmp������ʱ�ļ���
//	if (a < b)//a��b�Ƚϣ�a<bʱ���߽�����ֵ
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)//a��c�Ƚ�
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)//b��c�Ƚ�
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while(a<=100)//�޶�1<=a<=100
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()//��ӡ����
//{
//	int year = 1000;
// int count=0;
//	while(1000<=year&&year<=2000)//ע�ⲻ��д��1000<=year<=2000
//	{
//		if (year % 100 != 0&& year % 4 == 0)//�ж���������ַ���֮һ�����ܱ�100�����ܱ�4����������
//		{
//			printf("%d\n", year);
//          count++;
//		}
//		if(year%100==0&& year % 400 == 0)//�ܱ�400����������
//		{
//			printf("%d\n", year);
//          count++;
//		}
//		year++;
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int i = 2;
//	while(a<=200)
//	{
//		for (i = 2; i <= a; i++)
//		{
//			if (a % i == 0)
//				break;
//		}
//		if (i == a)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int i = 1;
//	int k = 0;
//	int b = 0;
//	while(100<=a&&a<=200)
//	{
//		while (i * i <= a)
//		{
//			i++;
//		}
//		b = --i;//a�ĸ�������ȡ��
//		for (k = 2; 2 <= k && k <= b; k++)
//		{
//			if (a % k == 0)
//				break;
//		}
//		if (k == b + 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int i = 0;
//	int j = 0;
//	for(a=101;a<=200;a+=2)
//	{
//		for (i = 2; i <= sqrt(a); i++)//������2������a֮�������������a��������������aΪ����
//		{
//			if (a % i == 0)
//				break;
//		}//�����ܷ��������a������ѭ������i>����aʱΪ����
//		if (i > sqrt(a))
//		{
//			printf("%d\n", a);
//			j++;
//		}
//	}
//	printf("\n%d", j);
//	return 0;
//}

