#define _CRT_SECURE_NO_WARNINGS 1


//ģ��ʵ��strcpy

#include <stdio.h>
#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello�Ŀ���
//	}
//	*dest = *src;// \0�Ŀ���
//}
#include <assert.h>

//
//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//
//strcpy ����⺯�� ��ʵ���ص���Ŀ��ռ����ʼ��ַ
//
//
//char* my_strcpy(char* dest, const char * src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello�Ŀ���
//	}
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
////strlen �����ַ������ȵ�
////my_strlen
////1. const 
////2. assert
//
//int main()
//{
//	
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	//1. Ŀ��ռ����ʼ��ַ��2. Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//printf("%d\n", num);
//
//	//2.
//	//const ���α�������������ͱ���Ϊ������,���ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//	//
//
//	const int num = 10;
//	//num = 20;//err
//
//	//int* const p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı�
//	////      ����ָ��ָ������ݣ����Ա��ı�
//	//*p = 20;//ok
//	//p = &n;//err
//
//
//	//const int* p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*����ߣ����ε���*p,��ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////      ����ָ����������ǿ����޸ĵ�
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}
// 
//
//��׳��
//³����
//
//size_t - unsigned int

//�����ⲿ����
//extern size_t my_strlen(const char* str);
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//Ҫ��������žͲ�����
//Ҫ������д����

