#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void swap(int* px, int* py, int* pz) {
	int m = *px;
	*px = *py;
	*py = *pz;
	*pz = m;
}
int main() {
	srand((unsigned char)time(NULL));
	int choice = 0;
menu:
	printf("######## 猜杯盖球游戏    #####\n");
	printf("########1   play     ######\n");
	printf("########0   exit     ######\n");
	printf("###########################\n");
	printf("请选择\n");
	scanf("%d", &choice);
	switch (choice) {
	case 1: {
		Sleep(1000);
		system("cls");
		int i = 0, a = 1, b = 2, c = 3;
		int v = rand() % 3 + 1;
		printf("小球放到了杯%d中", v);
		for (i = 0; i < 4; i++) {
			Sleep(1000);
			system("cls");
			swap(&a, &b, &c);
			printf("位置1杯%d\n 位置2杯%d\n 位置3杯%d\n", a, b,c);
			Sleep(1000);
			system("cls");
		}
		Sleep(1000);
		system("cls");
		printf("-----------------------------------\n");
		printf("-           进行选择             -\n");
		printf("-          （1为位置1）           -\n");
		printf("-          （2为位置2）           -\n");
		printf("-           （3为位置3）            -\n");
		printf("-----------------------------------\n");
		printf("请选择\n");
			int x = 0;
			scanf("%d", &x);
			Sleep(1000);
			system("cls");
			if(v==1&&x==3){
				printf("回答正确\n");
		}else if (v == 2&& x == 1) {
			printf("回答正确\n");
		} else if (v == 3 && x == 2) {
			printf("回答正确\n");
		}
			else {
				printf("回答错误\n");
			}
			break;
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