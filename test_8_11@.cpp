#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	printf("Are you ready?(Yes or NO)");
	Sleep(3000);
	system("cls");
	char arr3[10] = { 0 };
	scanf("%s", arr3);
	if (strcmp(arr3, "Yes") == 0) {
		system("cls");
		int a = 3, b = 2, c = 1;
		printf("%d", a);
		Sleep(1000);
		system("cls");
		printf("%d", b);
		Sleep(1000);
		system("cls");
		printf("%d", c);
		Sleep(1000);
		system("cls");
		char arr1[10] = { 0 };
		printf("请输入你想要的字母\n");
		scanf("%s", arr1 );
		Sleep(1000);
		system("cls");
		char arr2[10] = { 0 };
		printf("输出你刚刚输入的字母\n");
		scanf("%s", arr2);
		if (strcmp(arr1,arr2) == 0) {

			printf("成功");
		}
		else {
			printf("失败");
		}
	}
	else if(strcmp(arr3,"No")==0){

		printf("\n是不是玩不起");
	}
	return 0;
}