#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//��9�ĸ���
//{
//	int n = 1;
//	int i = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)//�����λ�ϵ�9
//			i++;
//		if (n / 10 == 9)//����ʮλ�ϵ�9
//			i++;//ע�⣬���������else if��,,,),���i=19��ԭ������99ʱ��if�������λ�ϵ�9��elseif�㲻ִ���ˣ����߲����ǲ��й�ϵ
//	}
//	printf("%d", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double count = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			i = -i;
//		count = count + 1.0 / i;
//		if (i % 2 == 0)
//			i = -i;
//	}
//	printf("%lf", count);
//	return 0;
//}

int main()
{
	int i = 0;
	double media = 0;
	double n = 0;
	for (i = 1; i <= 10; i++)
	{
		if ( i % 2 == 0)
			media = -1 / i;
		else
			media = 1 / i;
		n = n + media;
	}
	printf("%lf", n);
		return 0;
}

//int main()//��10�����������ֵ
//{
//	int arr[] = { 15,65,87,152,45,65,48,78,12,48 };
//	int i = 0;
//	int j = 0;
//	int media = 0;
//	int a = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		a++;
//		for ( j=a ; j <= 9; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				media = arr[j];
//				arr[j] = arr[i];
//				arr[i] = media;
//			}
//		}
//	}
//	printf("%d\n", arr[0]);
//	for (int k = 0; k <= 9; k++)
//		printf("%d ", arr[k]);
//	return 0;
//}

//int main()//��10���������ֵ����Ҫ˼·�Ǽ���maxΪ���ֵ����arr�е�Ԫ����ȣ����б�max���ʱ��max���
//{
//	int arr[] = { -15,-48,-51,-65,-5,-47,-14,-451,-11,-215,-23 };
//	int max = arr[0];//ע�⣬�������ʹmax=0����ô��arr�е�Ԫ�ض�Ϊ�����Ļ��ᵼ�������ʾ�Ľ��Ϊ0
//	int i = 0;
//	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 2; i++)
//	{
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (b = 1; b <= 9; b++)
//	{
//		for (a = 1; a <= b; a++)
//		{
//			c = a * b;
//			printf("%d*%d=%-2d ",a, b, c);//2d:��λ����������λ�Կո���棨��ʵ���Ҷ����Ч������-2d��ͬ�ϣ���ʵ��������Ч��
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	abc://ע�⣬��־�����ǣ���ʹ��goto���������abc��ִ����������
//	printf("hello 11");
//	goto abc;
//	return 0;
//}
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	while(1)
//	{
//		system("shutdown -s -t 60");
//		printf("�����롰������ȡ���ػ�");
//		scanf("%s", &arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "������"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	while(1)
//	{
//		system("shutdown -s -t 60");
//		printf("�����롰������ȡ���ػ�");
//		scanf("%s", &arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}