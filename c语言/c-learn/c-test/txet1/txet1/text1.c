#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Mul(int x, int y)
//{
//	int z = x * y;
//	return z;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int z = Mul(a, b);
//	printf("%d", z);
//	return 0;
//}

//int main()
//{
//	int a = 0;//a���ڴ��д洢��00000000000000000000000000000000
//	int b = ~a;//~ָ��a��Ӧ�Ķ���������λȡ������11111111111111111111111111111111����λ��1�����������ڴ������Բ������ʽ�洢
//	//ԭ�뵽���룺����λ���䣬����λȡ�������뵽���룺�����1
//	printf("%d", ~b);
//}

//#define Max(x,y) x>y?x:y
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int c = 0;
//	c = Max(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int m = 2;
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//	case 2:
//		m++;
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;//�˴�break�������ǵڶ���switch,��case4�Ի�ִ��,��ֱ�Ӱ�������default��
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d", m, n);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int l = 0;
//	int r = sizeof(arr)/4-1;
//	int n = 0;
//	scanf("%d", &n);
//	while(arr[(l+r)/2]!=n)
//	{
//		if (arr[(l + r) / 2] < n)
//		{
//			l = (l + r) / 2+1;
//		}
//		else if (arr[(l + r) / 2] > n)
//		{
//			r = (l + r) / 2-1;
//		}
//	}
//	printf("n=arr[%d]", (l + r) / 2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,7,8,9 };//��������
//	int l = 0;//���±�
//	int r = sizeof(arr) / sizeof(arr[0]) - 1;//���±�
//	int n = 0;//Ҫ���ҵ�����
//	printf("n=");
//	scanf("%d", &n);
//	while (l < r)//ֻ�е����±�С�����±�ʱ�ſ��ܲ��ҵ�n
//	{
//		if (n < arr[(l + r) / 2])//nС�������±�ƽ��ֵ��Ӧ�����֣���ȡ���±�Ϊ�����±�ƽ��ֵ��һ
//		{
//			r = (l + r) / 2 - 1;
//		}
//		else if (n > arr[(l + r) / 2])//����ͬ��
//		{
//			l = (l + r) / 2+1;
//		}
//		else
//		{
//			printf("arr�д���%d��λ���±�%d", n, (l + r) / 2);
//		}
//	}
//	if (l >= r)
//		printf("arr�в�����%d", n);
//	return 0;
//}

//int main()
//{
//	char arr1[] = { "welcome to Hezhe" };
//	char arr2[] = { "****************" };
//	int i = 0;
//	int j = sizeof(arr1) / sizeof(arr1[0])-2;
//	for ( ; i <= j; i++, j--)
//	{
//		arr2[i] = arr1[i];
//		arr2[j] = arr1[j];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", arr2);
//	return 0;
//}

int B(int a)
{
	a = 3;
	return a;
	a = 4;
	return a;
}
int main()
{
	int a = 0;
	int ret = 0;
	ret = B(a);
	printf("%d", ret);
	return 0;
}
