#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//#pragma pack()
//
//int main()
//{
//	struct A sa = {0};
//	struct B sb = { 0 };
//	printf("%d\n", sizeof(sa));
//	printf("%d\n", sizeof(sb));
//
//	return 0;
//}
//
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()
//
//
//
//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1 - 8bit
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}*Env_Alarm_Record;
//
////struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * 2 + 3);
//
//int main()
//{
//	int sz = (sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sz);
//
//	return  0;
//}
//
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}
//

#include <stdio.h>
//union Un
//{
//	short s[7];//14 16
//	int n;//4 8 4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//
//    return 0;
//}



//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);//1 257
//
//	return 0;
//}

//typedef struct {
//	int a;//0-3
//	char b;//4
//	//5 - �˷�
//	short c;//6-7
//	short d;//8-9
//	//10-11
//	
//	//12�ֽ�
//}AA_t;
//
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}

#include <stdlib.h>

//<��ָoffer>
//
//#include <assert.h>
//#include <ctype.h>
//#include <limits.h>
//
//enum State
//{
//	INVALID,//0
//	VALID   //1
//};
//
////state ��¼����my_atoi ���ص�ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
//
//enum State state = INVALID;
//
//int my_atoi(const char* s)
//{
//	int flag = 1;
//	//assert(NULL != s);
//	// 
//	//��ָ��
//	if (NULL == s)
//	{
//		return 0;
//	}
//	//���ַ�
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	//�����հ��ַ�
//	while (isspace(*s))
//	{
//		s++;
//	}
//	//+/-
//	if (*s == '+')
//	{
//		flag = 1;
//		s++;
//	}
//	else if (*s == '-')
//	{
//		flag = -1;
//		s++;
//	}
//	//���������ַ���ת��
//	long long n = 0;
//	while (isdigit(*s))
//	{
//		n = n * 10 + flag*(*s - '0');
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		s++;
//	}
//	if (*s == '\0')
//	{
//		state = VALID;
//		return (int)n;
//	}
//	else
//	{
//		state = VALID;
//		//�������ַ������
//		return (int)n;
//	}
//}
//
//int main()
//{
//	//1. ��ָ��
//	//2. ���ַ���
//	//3. �����˷������ַ�
//	//4. ������Χ
//	
//	//const char* p = "-123111111111111111111111111111111111111";
//	//"0"
//	//int ret = my_atoi(p);
//	const char* p = "     -123a";
//	int ret = my_atoi(p);
//
//	if (state == VALID)
//		printf("������ת����%d\n", ret);
//	else
//		printf("�Ƿ���ת����%d\n", ret);
//
//	return 0;
//}

//sprintf
//sscanf


//1 2 3 4 5 1 2 3 4
// 
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//1 2 3 4 5 6 1 2 3 4
//
//void Find(int arr[], int sz, int *px, int* py)
//{
//	//1. Ҫ�������������
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. ����ret����һλΪ1
//	//ret = 3
//	//011
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//�Ѵӵ�λ��ߵĵ�posλΪ1��Ϊ0�ķ�������һ���顣
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*px = num1;
//	*py = num2;
//}
//
//int main()
//{
//	//1 3 5 1 3
//	//2 2 4 4 6
//	// 
//	//1 4 1 4 5
//	//2 2 3 3 6
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	//101
//	//110
//	//011 
//	//1^2^3^4^5^6^1^2^3^4 = 5^6 = 3 != 0  
//	//
//	//1 3 1 3 5
//	//2 4 2 4 6
//	//1. ����
//	//2. �����Ҫ�㣺5��6�����ڲ�ͬ����
//	//
//	//�ҳ�������ֻ����һ�ε�����
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	//����ȥx,y�ĵ�ַ
//	//�����Ͳ���
//	Find(arr, sz, &x, &y);
//	
//	printf("%d %d\n", x, y);
//
//	return 0;
//}
//
//
//int main()
//{
//    long num = 0;
//    FILE* fp = NULL;
//    if ((fp = fopen("fname.dat", "r")) == NULL)
//    {
//        printf("Can��t open the file! ");
//        exit(0);
//    }
//    while (fgetc(fp) != EOF)
//    {
//        num++;
//    }
//    printf("num=%d\n", num);
//    fclose(fp);
//    return 0;
//}
//


//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//
//int main()
//{
//
//	return 0;
//}
//
//
//#define N 4
//
//#define Y(n) ((N+2)*n) /*���ֶ����ڱ�̹淶�����ϸ��ֹ��*/
//
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}
//
//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}
//



#include "add.h"
#include "add.h"

//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//
// ��η
//
// 
//��Ƭ�����
//
// 
// 
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

//#define SWAP(N) ((N & 0xaaaaaaaa)>>1) + ((N & 0x55555555) << 1)
//
//int main()
//{
//	//10
//	//00000000000000000000000000001010
//	int num = 10;
//	int ret = SWAP(num);
//	//int ret = ((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555) << 1);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//#include <stddef.h>
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//#define OFFSETOF(struct_name, mem_name)   (int)&(((struct_name*)0)->mem_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//
//	return 0;
//}
