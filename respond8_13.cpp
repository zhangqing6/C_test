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
	printf("######## �±�������Ϸ    #####\n");
	printf("########1   play     ######\n");
	printf("########0   exit     ######\n");
	printf("###########################\n");
	printf("��ѡ��\n");
	scanf("%d", &choice);
	switch (choice) {
	case 1: {
		Sleep(1000);
		system("cls");
		int i = 0, a = 1, b = 2, c = 3;
		int v = rand() % 3 + 1;
		printf("С��ŵ��˱�%d��", v);
		for (i = 0; i < 4; i++) {
			Sleep(1000);
			system("cls");
			swap(&a, &b, &c);
			printf("λ��1��%d\n λ��2��%d\n λ��3��%d\n", a, b,c);
			Sleep(1000);
			system("cls");
		}
		Sleep(1000);
		system("cls");
		printf("-----------------------------------\n");
		printf("-           ����ѡ��             -\n");
		printf("-          ��1Ϊλ��1��           -\n");
		printf("-          ��2Ϊλ��2��           -\n");
		printf("-           ��3Ϊλ��3��            -\n");
		printf("-----------------------------------\n");
		printf("��ѡ��\n");
			int x = 0;
			scanf("%d", &x);
			Sleep(1000);
			system("cls");
			if(v==1&&x==3){
				printf("�ش���ȷ\n");
		}else if (v == 2&& x == 1) {
			printf("�ش���ȷ\n");
		} else if (v == 3 && x == 2) {
			printf("�ش���ȷ\n");
		}
			else {
				printf("�ش����\n");
			}
			break;
	}
	case 0: {
		printf("��������\n");
		break; }
	default: {
		printf("ѡ�����\n");
		break; }
	}
	Sleep(3000);
	system("cls");
	goto menu;
	return 0;
}