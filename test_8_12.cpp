#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void menu() {
	printf("############################\n");
	printf("##### 1. play##############\n");
	printf("##### 0. exit##############\n");
	printf("###########################\n");
}
void game() {
		int guess = 0;
		int ret = rand() % 100 + 1;
	while(1){	printf("%d\n", ret);
		printf("�������\n");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("��С��\n");
		}
		else if (guess > ret) {
			printf("�´���");
		}
		else {
			printf("�¶���\n");
		}
	}
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("ѡ���������ѡ��\n");
			break;
		}


	} while (input);
	return 0;
}