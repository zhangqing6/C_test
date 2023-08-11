#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	printf("开始会出现一串数字，你将有三秒去记忆，是否开始游戏（输入1开始）\n");
	int a = 0;
	scanf("%d",&a);
	if (a == 1) {
		printf("18379203032\n");
		Sleep(3000);
		system("cls");
		printf("请输入正确的数字\n");
		char arr[20] = { 0 };
		scanf("%s", arr);
		if (strcmp(arr, "18379203032") == 0) {

			printf("正确\n");

		}
		else {
			printf("失败");
		}
	}
	else {

		;
	}
	return 0;
}