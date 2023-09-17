#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("-----------归位游戏-----------\n");
	printf("-----------1 PLAY-------------\n");
	printf("-----------0 EXIT-------------\n");
	printf("------------------------------\n");
}

void Switch (int*num1,int*num2) {
	int num3 = 0;
	num3 = *num1;
	*num1 = *num2;
	*num2 = num3;
}
void Rand(int arr2[12]) {
	srand((unsigned int)time(NULL));
	int i = 0;
	for (i = 0; i < 6; i++) {
		int num1 = rand() % 12;
		int num2 = rand() % 12;
		if (num1 != num2) {
			Switch(arr2 + num1, arr2 + num2);
		}
	}

}
void Display(int arr[12]) {
	int i, j = 0;
	for (i = 0; i <= 3; i++) {
		printf("%d  ", i);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("%d ", i+1);
		for (j = 0; j < 3; j++) {
			printf("%02d ", arr[i * 3 + j]);

		}
		printf("\n");

	}
}
int judge(int arr1[12], int arr2[12]) {
	int i = 0;
	 int count=0;
	for (i = 0; i < 12; i++) {

		if (arr1[i] == arr2[i]) {

			count++;
		}

	}

	return count;

}
int main() {
	int arr1[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int arr2[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int choice,end = 0;
	int x1, x2, y1, y2;
	Rand(arr2);
	do {
		menu();
		printf("请选择：\n");
		scanf("%d", &choice);
		if (choice == 1) {
			for (int time = 0; time < 6; time++) {
				Sleep(1500);
				system("cls");
				printf("初始位置：\n");
				Display(arr1);
				printf("当前位置为：\n");
				Display(arr2);
				printf("请输入你要交换的两个坐标，并用空格隔开(先行后列)\n");
				scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
				Switch(arr2 + 3 * (x1 - 1) + x2 - 1, arr2 + 3 * (y1 - 1) + y2 - 1);
				 end = judge(arr1, arr2);
				if (end == 12) {
					break;
				}
			}

		}
		if (end == 12) {
			Sleep(1500);
			system("cls");
			Display(arr2);
			printf("玩家获胜！！！\n");
			return 0;
		}
		if (end!= 12) {
			printf("已经交换六次，游戏失败\n");
		}
		if (choice == 0) {
			printf("退出游戏");
			return 0;
		}
		if (choice != 0 && choice != 1) {
			printf("非法输入，请重新输入\n");
		}
	} while (choice);

	return 0;
}