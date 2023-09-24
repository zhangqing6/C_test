#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void array() {
	int n, i, j, idx, num, MAX;
	int* M; 
	printf("请输入n：");
input:
	scanf("%d", &n);
	if (n % 2 == 0) 
	{
		printf("n不为奇数，请重新输入：");
		goto input;
	}
	MAX = n * n; 
	M = (int*)malloc(sizeof(int) * MAX); 
	M[n / 2] = 1; 
	i = 0;
	j = n / 2;
	
	for (num = 2; num <= MAX; num++)
	{
		i = i - 1;
		j = j + 1;
		if ((num - 1) % n == 0)  
		{
			i = i + 2;
			j = j - 1;
		}
		if (i < 0) 
		{
			i = n - 1;
		}
		if (j > n - 1) 
		{
			j = 0;
		}
		idx = i * n + j; 
		M[idx] = num;
	} 
	
	printf("生成的%d阶幻方：", n);
	idx = 0;
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%3d", M[idx]);
			idx++;
		}
	}
	printf("\n");
	free(M);
}
int main() {

	array();
	return 0;
}