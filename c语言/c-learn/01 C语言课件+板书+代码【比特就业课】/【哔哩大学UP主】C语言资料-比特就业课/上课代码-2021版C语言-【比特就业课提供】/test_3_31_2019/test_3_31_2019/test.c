#define _CRT_SECURE_NO_WARNINGS 1
//���ڴ���ĵ�һ��

#include <stdio.h>

//int main()
//{
//	printf("����\n");
//	return 0;
//}


//ctrl+f5
//VS2019�������� - ��¼һ�¾��������


//д����
//1. д����������main������
//100-500 ����
//���ִ���أ� - C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����C���Դ����е���main����-���

//д�����룬����Ļ�ϴ�ӡ������
//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
//printf ��ʹ�ã�Ҳ�ô��к�������ͷ�ļ� stdio.h��

//
//#include <stdio.h>
//
//int main()
//{
//	printf("����\n");
//
//	return 0;
//}
//
////
////����+����+���д���
////��ݼ���1. ctrl+f5
////        2. fn+ctrl+f5
////        3. �˵��У������ԡ�->����ʼִ�в����ԡ�
//
////����ִ�е�̫�죬û�п���
////Ϊ�˿������������һ��VS2013������
////
//
//

//��������
//��������� - д���� -  �������������
//�������������������������⣡
//�����̳� - �ϼ���Ʒ���۸� - 15.6Ԫ - С��  1.56*10^1
//���� - 50
//C���� - ������
//      - ����
//


//a
//'a' - �ַ�a
//
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long 
//	//long long
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//}
//
//int main()
//{
//	//printf("hehe\n");
//	//printf("����\n");
//	//printf("%d\n", 100);//��ӡһ������ - %d
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//
//int main()
//{
//	//������һ������
//	//����    ���������� = 0;//�Ƽ�
//	//����  ����������;//���Ƽ�
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age+1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//
//%d - ����
//%f - float
//%lf - double
//

//ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//
//int main()
//{
//	//�ֲ����� - {}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�����飺��ȫ�ֱ����;ֲ�����������д��һ����
//	//
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//дһ��������2�������ĺ�
//scanf���������뺯��

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	sum = a + b;

	printf("sum = %d\n", sum);

	return 0;
}