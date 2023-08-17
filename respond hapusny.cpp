#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, j, k, a, b, num[20];
	printf(" ‰»Î ˝æ›:");
	for (i = 0; i < 20; i++)
		scanf("%d", &num[i]);
	for (j = 0; j < 20; j++)
	{
		for (k = j + 1; k < 20; k++)
			if (num[k] > num[j])
			{
				a = num[j];
				num[j] = num[k];
				num[k] = a;
			}
	}
	for (b = 0; b < 20; b++)
		printf("%d ", num[b]);
	return 0;
}