#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	size_t count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//c=8 a=8 b=7
//	b += a++ + c;//b=23 a=9
//	//9 23 8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//NumberOf1���Ǽ������n�Ķ����Ʋ������м���1
//123
//123%10 = 3
//123/10= 12
//12%10=2
//12/10=1
//1%10=1
//1/10=0
// 
//15 - 00001111
//15%2=1
//15/2=7 - 00000111
//7%2=1
//7/2=3 -- 00000011
//3%2=1 -- 00000001
//3/2=1 -- 00000001
//1%2=1 -- 00000001
//1/2=0 -- 00000000

//14 - 00001110
//14%2=0
//14/2=7-00000111
//

//����һ��������
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//дһ�������ж�һ�������ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1
//k&(k-1) == 0
//
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	
//	int ret = NumberOf1(n);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}

//n = n&(n-1)
// n = 15
// 1111 - n
// 1110 - n-1
// 1110 - n
// 1101 - n-1
// 1100 - n
// 1011 - n-1
// 1000 - n
// 0111 - n-1
// 0000 - n
//
//#include <stdio.h>
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//��ͬΪ0������Ϊ1
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//
//	//ͳ��һ��ret��2�������м���1����˵��m��n�Ķ�����λ���м���λ��ͬ
//
//	/*for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//    */
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn��2�����е�����λ��ż��λ
//	//0000000000000000000000000000000001010
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;// a ^ b ^b
//	a = a ^ b;//a^b^a
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5 };
    short* p = (short*)arr;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        *(p + i) = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

