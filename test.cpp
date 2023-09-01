#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void menu() {
	printf("-------------扫雷游戏--------------\n");
	printf("------------PLAY    1--------------\n");
	printf("------------EXIT    0--------------\n");
	printf("-----------------------------------\n");
}

void start(char mine[11][11], char show[11][11]) {
	int i = 0, j = 0;
	for (i = 0; i < 11; i++) {
		for (j = 0; j < 11; j++) {

			mine[i][j] = '0';
			show[i][j] = '*';
		}
	}
}
void setmine(char mine[11][11]) {
	int i, j;
	int count = 10;
	while (count) {
		i = rand() % 9 + 1;
		j = rand() % 9 + 1;
		if (mine[i][j] == '0') {
			mine[i][j] = '1';
			count--;
		}
	}

}
void display1(char mine[11][11]) {
	int i, j = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {

			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}

}
void display2(char show[11][11]) {
	int i, j = 0;
	for (j = 0; j <= 9; j++) {
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		printf("%d ", i);
		for (j = 1; j <= 9; j++) {
			printf("%c ",show[i][j]);
		}
		printf("\n");
	}
}
int sweep(char mine[11][11],char show[11][11],int x,int y) {
	if (show[x][y] == '*') {
		if (mine[x][y] == '1') {
			return 1;
		}
		if (mine[x][y] == '0') {
			return 2;
		}
	}
	else {
		return 3;
	}
	return 0;
}
int caculate(char mine[11][11], int x, int y) {
	int i = 0, j = 0,count=0;
	for (i = x - 1; i <= x + 1; i++) {
		for (j = y - 1; j <= y + 1; j++) {
			if (mine[i][j] == '1') {
				count++;
			}

		}
	}
	return count + '0';
}
int mark(char show[11][11],int x,int y)
{
	if (show[x][y] == '*') {
		show[x][y] = 'M';
		printf("已成功标记\n");
		return 1;
	}
	if (show[x][y] == 'M') {
		show[x][y] = '*';
		printf("已取消标记\n");
		return 2;
	}
	return 0;
}
void spread(char mine[11][11], char show[11][11], int x, int y) {
	int i, j;
	if (show[x][y] == '0') {
		for (i = x - 1; i <= x + 1; i++) {
			for (j = y - 1; j <= y + 1; j++) {
				if (show[i][j] == '*') {
					show[i][j] = caculate(mine, i, j);
					spread(mine, show, i, j);
				}


			}

		}
	}
	else {
		;
	}
}
int result(char show[11][11]) {
	int i = 0,j=0,count=0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (show[i][j] == 'M' || show[i][j] == '*')
			{
				count++;
			}
		}

	}
	if (count == 10) {
		return 4;
	}
	else {
		return 2;
	}
	return 0;
}
int main() {
	int choice1 = 0;
	int x, y = 0;
	int choice2 = 0;
	int end1,end2,win = 0;
	srand((unsigned int)time(NULL));
	char mine[11][11] = { 0 };
	char show[11][11] = { 0 };
choose1:
	menu();
	printf("请选择》");
	scanf("%d", &choice1);
	if (1 == choice1) {
		start(mine, show);
		setmine(mine);
		choose2:
		display2(show);
		win = result(show);
		if (4 == win) {
			printf("玩家获胜！！！");
			return 0;
		}
		printf("请输入你要排查的坐标（第一个数选择为标记1或排查2，后面为坐标，数字间用空格隔开）\n");
		scanf("%d %d %d", &choice2, &x, &y);
		if (choice2 == 1) {
			end1 = mark(show, x, y);
			if (end1 == 1) {
				Sleep(1500);
				system("cls");
				goto choose2;
			}
			if (end1 == 2) {
				Sleep(1500);
				system("cls");
				goto choose2;
			}
		}
		if (2 == choice2) {
			end2 = sweep(mine, show, x, y);
			switch (end2) {
			case 1:
				printf("游戏失败，你扫到雷\n");
				display1(mine);
				return 0;
			case 2:
				show[x][y] = caculate(mine, x, y);
				spread(mine, show, x, y);
				Sleep(1500);
				system("cls");
				goto choose2;
				break;
			case 3:
				printf("非法输入，请重新输入\n");
				Sleep(1500);
				system("cls");
				goto choose2;
				break;
			case 4:
				printf("玩家获胜！！！");
				break;
			}
			

		}
		else {
			printf("非法输入，请重新输入\n");
			Sleep(1500);
			system("cls");
			goto choose2;
		}
	}
	if (0 == choice1) {
		printf("退出游戏");
		return 0;
	}
	else {
		printf("非法选择，请重新选择\n");
		goto choose1;
	}
	return 0;
}