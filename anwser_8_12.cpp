#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main(){
	int x = 0, y = 0;
	srand((unsigned char)time(NULL));
int choice = 0;
menu:
printf("######## 猜拳游戏    #####\n");
printf("########1   play     ######\n");
printf("########0   exit     ######\n");
printf("###########################\n");
printf("请选择\n");
scanf("%d", &choice);
switch (choice) {
case 1:{
Sleep(1000);
system("cls");
for (int i = 0; i < 3; i++) {
	printf("-----------------------------------\n");
	printf("-           进行选择             -\n");
	printf("-          （1为石头）           -\n");
	printf("-          （2为剪刀）           -\n");
	printf("-           （3为布）            -\n");
	printf("-----------------------------------\n");
	printf("请选择\n");
	int a = 0;
	int b = rand() % 3 + 1;
	scanf("%d", &a);
	printf("%d", b);
	if (a == b) {
		printf("你们出法相同\n");
		printf("这次交锋，你们平局\n");
	}if (a == 1 && b == 2) {
		printf("你出了石头，他出了剪刀\n");
		printf("这次交锋，玩家获胜\n"); x++;
	}if (a == 1 && b == 3) {
		printf("你出了石头，他出了布\n");
		printf("这次交锋，电脑获胜\n"); y++;
	}
	if (a == 2 && b == 3) {
		printf("你出了剪刀，他出了布\n");
		printf("这次交锋，玩家获胜\n"); x++;
	}if (a == 3 && b == 2) {
		printf("你出了布，他出了剪刀\n");
		printf("这次交锋，电脑获胜\n"); y++;
	}if (a == 2 && b == 1) {
		printf("你出了剪刀，他出了石头\n");
		printf("这次交锋，电脑获胜\n"); y++;
	}if (a == 3 && b == 1) {
		printf("你出了布，他出了石头\n");
		printf("这次交锋，玩家获胜\n"); x++;
	}
	Sleep(3000);
	system("cls");
}
printf("玩家总共赢的局数为%d\n", x);
printf("电脑总共赢的局数为%d\n", y);
if (x > y) {
	printf("玩家获胜\n");
}
if (x < y) {
	printf("电脑获胜\n");
}
if (x == y) {
	printf("双方平局\n");
}
}
case 0: {
	printf("不玩拉倒\n");
	break; }
default: {
	printf("选择错误\n");
	break; }
	}
Sleep(3000);
system("cls");
goto menu;
	return 0;
}