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

void print(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *((*(p + i)) + j));//ע����ô������ָ�����������ÿ��Ԫ�أ���*p�ȼ�������������*��*p���ŷ�������Ԫ��
			printf("%d ", p[i][j]);//���д���������д����ͬ��*p�ȼ�����������pΪָ��ÿ�е����飬��p[i]����ָ���i���������飬Ҳ�ȼ��ڵ�i����������p[i][j]ͬ�������
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print(arr, 3, 5);//ע�⣬��ά��������������ȥ���ǵ�һ������ĵ�ַ����һ������ָ��
	return 0;
}