#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int (*  (*F)(int, int))(int);
//int(*  (*F)(int, int) );
//


//���Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);


//1 2 3
//2 3 4
//4 5 6


//1 2 3 
//4 5 6
//7 8 9
//
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;//�ҵ���
//		}
//	}
//	return 0;//�Ҳ���
//}

//
//
//int find_num(int arr[3][3], int*px, int*py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//�ҵ���
//		}
//	}
//
//	return 0;//�Ҳ���
//}
//
//
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	//����ҵ�����1�� �Ҳ�������0
//	int x = 3;//��
//	int y = 3;//��
//	//&x,&y 
//	//1. �������
//	//2. ����ֵ
//
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	//O(1)
//	//N - 3 5 7
//	//
//	//N  - ���ҵĴ�������������N�Σ�2N 3N
//	//N*N  N*��N-1�� -- O(n^2)
//	//
//	//����һ�����֣�����˵�ң�7
//	//�����ķ���������Ҫ��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		if (arr[i][j] == 7)
//	//		{
//
//	//		}
//	//	}
//	//}
//	return 0;
//}
//
//
//
//A.(int* p[10])(int*)
//B.int[10] * p(int*)
//C.int (*  (*p)[10] )(int*) //ok
//D.int((int*)[10])* p

//����
//�ַ���
//���ݽṹ



//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;//1
//		//2. ��ߵ�n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3. tmp�������
//		*(str + n - 1) = tmp;
//	}
//}


//
//#include <assert.h>
////������ת��
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	reverse(str, str+k-1);//��
//	reverse(str+k, str+n-1);//��
//	reverse(str, str+n-1);//����
//}
//
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include <string.h>

//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);//5
//	for (i = 0; i < n; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str1;//1
//		//2. ��ߵ�n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3. tmp�������
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//ABCDA
//BCDAA
//CDAAB
//DAABC
//AABCD
// 
//AABCDAABCD
//

//
//int is_string_rotate(char* str1, char* str2)
//{
//	//���Ȳ���ȣ��϶�������ת�õ���
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1. str1�ַ����ĺ��׷��һ��str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2. �ж�str2�Ƿ�Ϊstr1���ִ�
//	char* ret = strstr(str1, str2);
//
//	return ret != NULL;
//
//	/*if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}*/
//	//AABCDAABCD 
//	//BCD
//}
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}
//


//9:05 �ֻ���


//int main()
//{
//	char arr[20] = "hello";
//	//hello bit\0
//	//strcat(arr, "bit");
//
//	//strcat(arr, arr);
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//
//	return 0;
//}




//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}
