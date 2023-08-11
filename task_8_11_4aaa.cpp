#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("请预设密码\n");
	scanf("%s", arr1);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n请输入密码\n");
		scanf("%s", arr2);
		if (strcmp(arr1, arr2) == 0) 
		{
			printf("登入成功\n");
			break;
		}
		else {
			printf("登入失败\n");
		}
	}
	if (3 == i)
	{
		printf("登入失败\n");
	}
	return 0;
}
