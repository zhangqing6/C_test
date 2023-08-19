#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j;
	int a[3][3] = {};
	float b[3] = {};
	printf("输入数组元素：");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}printf("数组a为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
		b[i] = (a[i][0] + a[i][1] + a[i][2]) / 3;
		printf("");
	}
	printf("数组b为：%.2f,%.2f,%.2f", b[0], b[1], b[2]);
	return 0;
}