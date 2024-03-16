#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char* p = "abcdef";//这里的字符串是常量字符串，不能被改，所以下面的*p会使程序崩溃，解决方法是加入const
//	//const char* p = "abcdef";
//	*p = "w";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "abcd";
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	if (p1 == p2)
//		printf("相等\n");
//	else
//		printf("不想等\n");
//	if(arr1==arr2)
//		printf("相等\n");
//	else
//		printf("不想等\n");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//加4个字节
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//加4个字节
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//加40个字节，&arr是指向整个数组的地址
//	return 0;
//}

//char* arr[5] = { 0 };
//char* (*pc)[5] = &arr;

//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *((*(p + i)) + j));//注意怎么用数组指针访问数组中每个元素，先*p等价于数组名，再*（*p）才访问数组元素
//			printf("%d ", p[i][j]);//这个写法和上面的写法相同，*p等价于数组名，p为指向每行的数组，则p[i]代表指向第i行整个数组，也等价于第i行数组名，p[i][j]同样的理解
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);//注意，二维数组数组名传过去的是第一行数组的地址，是一个数组指针
//	return 0;
//}

//int main()
//{
//	char* pc = "abcdef";
//	*pc = "w";
//	printf("%s\n", pc);
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1=p2");
//	else
//		printf("不相等");
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1!=arr2");
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* pstr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(pstr[i] + j));
//			printf("%d", pstr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1 ,2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//void print(int(*p)[5], int r, int c)
//{
//	for (r = 0; r < 3; r++)
//	{
//		for (c = 0; c < 5; c++)
//		{
//			printf("%d ", p[r][c]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(&arr, 3, 5);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &Add;//将函数地址放入变量中
//	printf("%d\n", (*Add)(3, 5));//函数地址的使用
//	return 0;
//}

//void menu(void)
//{
//	printf("*********************\n");
//	printf("****1:加法  2减法****\n");
//	printf("****3:乘法  4除法****\n");
//	printf("****0:退出       ****\n");
//	printf("*********************\n");
//	printf("请选择:>");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Page(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个数字:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Page(Add);
//			break;
//		case 2:
//			Page(Sub);
//			break;
//		case 3:
//			Page(Mul);
//			break;
//		case 4:
//			Page(Div);
//			break;
//		case 0:
//			printf("退出程序");
//			break;
//		default:
//			printf("输入错误");
//		}
//	} while (input);
//}

void menu(void)
{
	printf("*********************\n");
	printf("****1:加法  2减法****\n");
	printf("****3:乘法  4除法****\n");
	printf("****0:退出       ****\n");
	printf("*********************\n");
	printf("请选择:>");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int ret = 0;
	int x = 0;
	int y = 0;
	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 0)
			printf("退出程序");
		else if (input > 4)
			printf("输入错误");
		else
		{
			printf("请输入两个数字:>");
			scanf("%d%d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}

	} while (input);
	return 0;
}
