#define _CRT_SECURE_NO_WARNINGS 1

//void test()
//{
//	int b = 0;
//}
//
//int main()
//{
//	int a = 10;
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    //�ֲ���������
//    printf("num = %d\n", num);//1
//    return 0;
//}
//

#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
//

//C99 ��׼������һ������䳤����
//֧�����鴴����ʱ���ñ���ָ����С�ģ�����������鲻�ܳ�ʼ��
//VS2019 ��֧��C99�б䳤�����

//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}

//MAX - һ�㲻����Ѻ���������д��ȫ��д
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}


//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

#include <stdio.h>

//int main()
//{
//    //����
//    int m = 0;
//    printf("������һ������:");
//    scanf("%d", &m);
//
//    //�жϲ����
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}

//
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//�����
//	return 0;
//}


//
//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	/*if (age >= 18)
//	{ 
//		printf("����\n");
//	}
//	else
//	{ 
//		printf("δ����\n");
//		printf("����̸����\n");
//	}*/
//	/*if (age >= 18)
//		printf("����\n");*/
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//������ - 
//<������C/C++���>


//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//		printf("hehe\n");
//
//
//	return 0;
//}
//
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//}
//
//int main()
//{
//	//C++
//	//c99֧��������д
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//}
//
//	for (int i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//1-5 ������
//6-7 ��Ϣ��

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:m++;n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
//	// 
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	return 0;
//}

//getchar

//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar �Ͷ�ȡ����

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}