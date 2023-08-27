#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<windows.h>
void menu() {
	printf("---------------------------------\n");
	printf("------------1 PLAY---------------\n");
	printf("------------0 EXIT---------------\n");
	printf("---------------------------------\n");
}
void game() {
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (Win(board, ROW, COL) == '*') {
			printf("玩家获胜\n");
			break;
		}
		while (Isfull(board, ROW, COL));
		Sleep(1500);
		system("cls");
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (Win(board, ROW, COL) == '#') {
			printf("电脑获胜\n");
			break;
		}
		while (Isfull(board, ROW, COL));
		Sleep(1500);
		system("cls");
		DisplayBoard(board, ROW, COL);
	}
}
int main() {
	srand((unsigned int)time(NULL));
	int choice1 = 0;
	do {
		menu();
		printf("请选择:");
		scanf("%d", &choice1);
		Sleep(1500);
		system("cls");
		switch (choice1) {
		case 1:
			game();
			continue;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			continue;
		}
	} while (choice1);
	return 0;
}