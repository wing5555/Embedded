#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char* p = "hello bit.";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = 1;
//        printf("hehe\n");
//        int a = 0;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	return 0;
//}

//void test2()
//{
//	printf("haha");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//void test3()
//{
//	printf("hehe");
//}
//int main()
//{
//	test();
//	test3();
//	return 0;
//}



int main()
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hehe\n");
    }
    return 0;
}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}

//void Fun(int* x)
//{
//	//
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	Fun(arr);
//	return 0;
//}
//�Լ�дһ��stycpy����
//void my_strcpy(char* dest, char* src)
//{
//	*dest = *src;
//	while ( *src++ )
//	{
//		dest++;
//		*dest = *src;
//	}
//}

#include <assert.h>
//const��ֹsrc���ı䣬char*����ʵ����ʽ����
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//��ֹ��ָ��
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����*dest++ = *src++������˳����*src=*dest(����*dest��ASC��ֵ������++��
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "hellow world"};
//	char arr2[20] = { "111111111111111"};
//	my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}

//const���÷�
//int main()
//{
//	const int num = 1;
//	int num1 = 0;
	//err,����ǰ��const��������ͨ��ֱ�Ӹ�ֵ����
	//num = 10;
	// ͨ�������ò����ı�num��ֵ
	//int* pn = &num;
	//*pn = 10;
	//printf("%d\n", num);
	//err��const����*��ߣ�������ͨ�������øı�num��ֵ,�����Ըı�pn
	//const int* pn = &num;
	//*pn = 10;
	//pn = &num1;
	//const����*���ұ�,����ͨ�������øı�num��ֵ�������ܸı�pn��ֵ
//	int* const pn = &num;
//	*pn = 10;
//	printf("%d\n", num);
//	pn = &num1;
//	return 0;
//}

//int main()
//{
//
//}


