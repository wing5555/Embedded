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

void print(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *((*(p + i)) + j));//注意怎么用数组指针访问数组中每个元素，先*p等价于数组名，再*（*p）才访问数组元素
			printf("%d ", p[i][j]);//这个写法和上面的写法相同，*p等价于数组名，p为指向每行的数组，则p[i]代表指向第i行整个数组，也等价于第i行数组名，p[i][j]同样的理解
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print(arr, 3, 5);//注意，二维数组数组名传过去的是第一行数组的地址，是一个数组指针
	return 0;
}