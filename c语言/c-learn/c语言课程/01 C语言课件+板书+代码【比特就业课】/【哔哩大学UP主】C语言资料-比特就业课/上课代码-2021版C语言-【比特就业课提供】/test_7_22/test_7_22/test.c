#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = {0};
//	//sprintf ��һ����ʽ�������ݣ�ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//��buf�ַ����л�ԭ��һ���ṹ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//�����ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʵλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 
//0000 0000 0000 0000 0010 0111 0001 0000
//00 00 27 10
//


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д�����test.txt�ļ�����һ�ݣ�����test2.txt
//
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//�ļ��򿪳ɹ�
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		//д�ļ�
//		fputc(ch, pfwrite);
//	}
//	
//	if (feof(pfread))
//	{
//		printf("�����ļ�������־���ļ���������\n");
//	}
//	else if(ferror(pfread))
//	{
//		printf("�ļ���ȡʧ�ܽ���\n");
//	}
//
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}

//
//
//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//
//	return 0;
//}



//�Ʒ����� - 100Ԫ����

//�����ⲿ����
extern int Add(int x, int y);


int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}





