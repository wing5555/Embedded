#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char* p = "abcdef";//������ַ����ǳ����ַ��������ܱ��ģ����������*p��ʹ�����������������Ǽ���const
//	//const char* p = "abcdef";
//	*p = "w";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "abcd";
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	if (p1 == p2)
//		printf("���\n");
//	else
//		printf("�����\n");
//	if(arr1==arr2)
//		printf("���\n");
//	else
//		printf("�����\n");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//��4���ֽ�
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//��4���ֽ�
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//��40���ֽڣ�&arr��ָ����������ĵ�ַ
//	return 0;
//}

//char* arr[5] = { 0 };
//char* (*pc)[5] = &arr;

//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *((*(p + i)) + j));//ע����ô������ָ�����������ÿ��Ԫ�أ���*p�ȼ�������������*��*p���ŷ�������Ԫ��
//			printf("%d ", p[i][j]);//���д���������д����ͬ��*p�ȼ�����������pΪָ��ÿ�е����飬��p[i]����ָ���i���������飬Ҳ�ȼ��ڵ�i����������p[i][j]ͬ�������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);//ע�⣬��ά��������������ȥ���ǵ�һ������ĵ�ַ����һ������ָ��
//	return 0;
//}

//int main()
//{
//	char* pc = "abcdef";
//	*pc = "w";
//	printf("%s\n", pc);
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1=p2");
//	else
//		printf("�����");
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1!=arr2");
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* pstr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(pstr[i] + j));
//			printf("%d", pstr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1 ,2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//void print(int(*p)[5], int r, int c)
//{
//	for (r = 0; r < 3; r++)
//	{
//		for (c = 0; c < 5; c++)
//		{
//			printf("%d ", p[r][c]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(&arr, 3, 5);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &Add;//��������ַ���������
//	printf("%d\n", (*Add)(3, 5));//������ַ��ʹ��
//	return 0;
//}

//void menu(void)
//{
//	printf("*********************\n");
//	printf("****1:�ӷ�  2����****\n");
//	printf("****3:�˷�  4����****\n");
//	printf("****0:�˳�       ****\n");
//	printf("*********************\n");
//	printf("��ѡ��:>");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Page(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("��������������:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Page(Add);
//			break;
//		case 2:
//			Page(Sub);
//			break;
//		case 3:
//			Page(Mul);
//			break;
//		case 4:
//			Page(Div);
//			break;
//		case 0:
//			printf("�˳�����");
//			break;
//		default:
//			printf("�������");
//		}
//	} while (input);
//}

void menu(void)
{
	printf("*********************\n");
	printf("****1:�ӷ�  2����****\n");
	printf("****3:�˷�  4����****\n");
	printf("****0:�˳�       ****\n");
	printf("*********************\n");
	printf("��ѡ��:>");
}
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
int main()
{
	int input = 0;
	int ret = 0;
	int x = 0;
	int y = 0;
	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 0)
			printf("�˳�����");
		else if (input > 4)
			printf("�������");
		else
		{
			printf("��������������:>");
			scanf("%d%d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}

	} while (input);
	return 0;
}
