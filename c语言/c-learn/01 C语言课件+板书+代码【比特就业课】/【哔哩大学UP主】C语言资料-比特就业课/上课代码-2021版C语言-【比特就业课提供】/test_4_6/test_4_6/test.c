#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//
//	//~ ��λȡ��
//
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//��������ȥ�о��� - �˷�ʱ���о����Ǵ���Ĵ���
//	printf("%d\n", b);
//
//	//int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//
//	//int b = ++a;//ǰ��++ - ��++����ʹ��
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int c = a || b;
//
//	printf("%d\n", c);
//
//	/*int a = 3;
//	int b = 0;
//
//	int c = a && b;
//	
//	printf("%d\n", c);*/
//
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a=5       c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//
//	printf("%d\n", d);
//	return 0;
//}

//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}

//�������ò�����
//int main()
//{
//	//���ú�����ʱ�򣬺�������ߵģ������Ǻ������ò�����
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}

//C�����ṩ�Ĺؼ���
//1. C�����ṩ�ģ������Լ������ؼ���
//2. �����������ǹؼ���
//
//
//int main()
//{
//	//int char;
//	{
//		int a = 10;//�Զ��������Զ����ٵ� - �Զ�����
//		//auto ʡ�Ե���
//		// 
//		//auto �µ�C�����﷨��Ҳ�������÷� - ��ʱ������
//	}
//
//	return 0;
//}


//int main()
//{
//	//
//	//����/Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	//
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//}

// typedef 

//typedef unsigned int u_int;
////���� - С��
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static  - ��̬��
//1. static���ξֲ�����
//2. static����ȫ�ֱ���
//3. static���κ���

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern �����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//��������
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define ��һ��Ԥ����ָ��
//1.define�������

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2. define �����
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n", &a);//%p ר��������ӡ��ַ��
//
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//
//	//* ˵�� pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//
//	return 0;
//}

//ָ�� ���� ��ַ

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//* �����ò��� | *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
//


//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ�����������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"����", 20, 85.5};//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}