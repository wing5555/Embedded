#define _CRT_SECURE_NO_WARNINGS
float Lagrange_interpolation(float arr1[], float arr2[], float x, int sz)
{
	int i = 0;
	int j = 0;
	float num = 1;//����������
	float den = 1;//��������ĸ
	float tmp1 = 0;
	float tmp2 = 0;
	float Basic_fun = 0;//������
	float L = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		for (j = 0; j <= sz - 1; j++)
		{
			if (j != i)
			{
				tmp1 = x - arr1[j];
				num = num * tmp1;
				tmp2 = arr1[i] - arr1[j];
				den = den * tmp2;
			}
		}
		Basic_fun = num / den;
		L = L + Basic_fun * arr2[i];
		num = 1;
		den = 1;
	}
	return L;
}
int main()
{
	float arr1[] = { 29.6,28.8,27.9,27,25,24.2,22.9,21.6,20.2,18.8 };//�Ա���
	float arr2[] = { 35  ,34  ,33  ,32,31,  29,  28,  27,  26, 25 };//����ֵ
	float D = 24;
	int sz = sizeof(arr1) / sizeof(arr2[0]);
	float ret = 0;
	int i = 0;
	ret = Lagrange_interpolation(arr1, arr2, D, sz);
	printf("�Ա�����");
	for (i = 0; i <= sz - 1; i++)
		printf("%-8.1f ", arr1[i]);
	printf("\n����ֵ��");
	for (i = 0; i <= sz - 1; i++)
		printf("%-8.0f ", arr2[i]);
	printf("\n\n��D=%.0fʱ����Ƕȣ�%f\n\n", D, ret);
	return 0;
}