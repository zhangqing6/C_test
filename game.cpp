#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {

			board[i][j] = ' ';
		}

	}
}
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			int j = 0;
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y=0;
	while (1) {
		printf("玩家下棋(请输入坐标);\n");
		scanf("%d %d", &x, &y);
			if (x > 0 && x <= row && y > 0 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
			break;
				}
			else  {
				printf("坐标被占用，请重新输入\n");
				}

			}
			else {
				printf("坐标非法，请重新输入\n");
			}
		}
	}
void ComputerMove(char board[ROW][COL], int row, int col) {
	int a, b;
	while (1) {
		a = rand() % row + 1;
		b = rand() % col + 1;
			if (board[a][b] == ' ') {
				board[a][b] = '#';
				break;
			}
	}

}
int Isfull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ')
				return 0;
		}

	}
	return 1;

}
char Win(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (j = 0; j < col; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
		{
			return board[0][j];
		}

	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
		{
		return board[0][2];
		}
	return 0;
}