#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j;
	int a[3][3] = {};
	float b[3] = {};
	printf("��������Ԫ�أ�");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}printf("����aΪ��\n");
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
	printf("����bΪ��%.2f,%.2f,%.2f", b[0], b[1], b[2]);
	return 0;
}