#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };//���ڴ��У�0100000002000000030000000400000005000000
//    short* p = (short*)arr;//short*ֻ�ܷ��������ֽ�
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int i;//i=0;
//int main()
//{
//    i--;//i=-1
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int Sn(int a,int n)
//{
//	int Sn = 0;
//	int i = 0;
//	for (i = 0; i <  n; i++)
//	{
//		Sn = Sn + a;
//		a = a * 10 + 2;
//
//	}
//	return Sn;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int ret = Sn(a,n);
//	printf("%d\n", ret);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//int Digit(int n)
//{
//	int count = 1;
//	while (n = n / 10)
//	{
//		count++;
//	}
//	return count;
//}
//int Narcissistic_number(int n)
//{
//	int tmp1 = 0;
//	int tmp2 = 0;
//	int tmp3 = 0;
//	int sum = 0;
//	int ret = 0;
//	int mul = 1;
//	ret = Digit(n);
//	tmp2 = n;
//	while (n)
//	{
//		mul = 1;
//		tmp3 = ret;
//		tmp1 = n % 10;
//		while (tmp3)
//		{
//			mul = mul * tmp1;
//			tmp3--;
//		}
//		sum = sum + mul;
//		n = n / 10;
//	}
//	if (sum == tmp2)
//	{
//		return tmp2;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		ret = Narcissistic_number(n);
//		if(ret != -1)
//		{
//			printf("%d\n", ret);
//		}
//	}
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		int count = 1;
//		sum = 0;
//		tmp = n;
//		while (tmp = tmp / 10)
//		{
//			count++;
//		}
//		tmp = n;
//		while(tmp)
//		{
//			sum = sum + pow(tmp % 10, count); 
//			tmp = tmp / 10;
//		}
//		if (n == sum)
//			printf("%d ", n);
//	}
//	return 0;
//}

//////ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}








///////VS�������Լ��ɺ���ʾ

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//ջ���洢���ɸߵ�ַ���͵�ַ������洢�ɵ͵�ַ���ߵ�ַ
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
<<<<<<< HEAD
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int count = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			count++;
//			tmp = arr[i];
//			arr[i] = arr[count - 1];
//			arr[count - 1] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������ж�
//int main()
//{
//	int arr[ 6 ] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	int j = 2;
//	for(i=0;i<6;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�жϳ��̱�
//	for (i = 0; i <= 3; i += 3)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//		if (arr[i + 1] > arr[i + 2])
//		{
//			tmp = arr[i + 1];
//			arr[i + 1] = arr[i + 2];
//			arr[i + 2] = tmp;
//		}
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	for (i = 0; i <= 3; i += 3)
//	{
//		if (arr[i] + arr[i + 1] > arr[i + 2])
//		{
//			if (arr[i] == arr[i + 1] && arr[i] != arr[i + 2])
//			{
//				printf("����������\n");
//			}
//			else if (arr[i] == arr[i + 1] == arr[i + 2])//arr[i] == arr[i + 1] == arr[i + 2]��ʵ��Ӧ����a==b&&b==c;
//			{
//				printf("�ȱ�������\n");
//			}
//			else
//				printf("��ͨ������\n");
//		}
//		else
//			printf("����������\n");
//	}
//}

//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("�ȱ�������");
//			}
//			else if (a == b && b != c || b == c && a != b || c == a && a != b)
//			{
//				printf("����������");
//			}
//			else
//				printf("��ͨ������");
//		}
//		else
//		{
//			printf("����������");
//		}
//	}
//	return 0;
//}



int main()
{
	char arr[20] = { 0 };
	//scanf("%s", &arr);//����scanf������������ַ����а����ո񣬿�����gets����
	gets(arr);
	int sz = strlen(arr);
	char tmp = 0;
	int i = 0;
	while(i < sz - 1 - i)
	{
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
		i++;
	}
	printf("%s", arr);
=======
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int count = 0;
	int tmp = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			count++;
			tmp = arr[i];
			arr[i] = arr[count - 1];
			arr[count - 1] = tmp;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
>>>>>>> cdf16b330d4fd60800a7b21a50ed00aea1df512f
	return 0;
}

