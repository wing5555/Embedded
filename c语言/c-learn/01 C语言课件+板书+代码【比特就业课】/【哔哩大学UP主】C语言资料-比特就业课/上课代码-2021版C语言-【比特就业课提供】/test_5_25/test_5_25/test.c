#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
//int main()
//{
//    i--;//-1
//    //sizeof���������������Ľ����������unsigned int
//    if (i > sizeof(i))//
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
//
//int main()
//{
//	//��a���ǰn��֮�� - ���������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;//һ��
//	for (i = 0; i < n; i++)
//	{
//		//���һ��
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	int i = 0;
//	while (p<=pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ��������
//		//1. ����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. ����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow��������η���
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3. �ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//

//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}

//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//��Ŀ���ݣ�
//A.a.a ok
//B. *p.a
//C.p->a
//D.(*p).a

//дһ����������������һ���ַ���������
#include <assert.h>
#include <string.h>
//
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
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
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	if(money>0)
//		total = 2 * money - 1;
//
//	//int total = money;//
//	//int empty = money;
//	////��ʼ�û�
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty%2;
//	//}
//	printf("%d\n", total);
//
//	return 0;
//}


//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//��ǰ������һ��ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return  0;
//}
//

//
//int main()
//{
//	//unsigned char 0~255
//
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100
//
//	unsigned char c = 0;
//	//a��b��������
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//
//	c = a + b;
//	//00101100
//	//00000000000000000000000000101100
//	//
//	printf("%d %d", a + b, c);
//	//              300   44
//	return 0;
//}


//
//��32λ���ģʽ�������ϱ���b���ڣ� ��
//
//��Ŀ���ݣ�
//A.0x00
//B.0x12
//C.0x34
//D.0x1234
//
//int main()
//{
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//��ѧ?

int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c\n", killer);
		}
	}

	return 0;
}













