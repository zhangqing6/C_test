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
printf("######## ��ȭ��Ϸ    #####\n");
printf("########1   play     ######\n");
printf("########0   exit     ######\n");
printf("###########################\n");
printf("��ѡ��\n");
scanf("%d", &choice);
switch (choice) {
case 1:{
Sleep(1000);
system("cls");
for (int i = 0; i < 3; i++) {
	printf("-----------------------------------\n");
	printf("-           ����ѡ��             -\n");
	printf("-          ��1Ϊʯͷ��           -\n");
	printf("-          ��2Ϊ������           -\n");
	printf("-           ��3Ϊ����            -\n");
	printf("-----------------------------------\n");
	printf("��ѡ��\n");
	int a = 0;
	int b = rand() % 3 + 1;
	scanf("%d", &a);
	printf("%d", b);
	if (a == b) {
		printf("���ǳ�����ͬ\n");
		printf("��ν��棬����ƽ��\n");
	}if (a == 1 && b == 2) {
		printf("�����ʯͷ�������˼���\n");
		printf("��ν��棬��һ�ʤ\n"); x++;
	}if (a == 1 && b == 3) {
		printf("�����ʯͷ�������˲�\n");
		printf("��ν��棬���Ի�ʤ\n"); y++;
	}
	if (a == 2 && b == 3) {
		printf("����˼����������˲�\n");
		printf("��ν��棬��һ�ʤ\n"); x++;
	}if (a == 3 && b == 2) {
		printf("����˲��������˼���\n");
		printf("��ν��棬���Ի�ʤ\n"); y++;
	}if (a == 2 && b == 1) {
		printf("����˼�����������ʯͷ\n");
		printf("��ν��棬���Ի�ʤ\n"); y++;
	}if (a == 3 && b == 1) {
		printf("����˲���������ʯͷ\n");
		printf("��ν��棬��һ�ʤ\n"); x++;
	}
	Sleep(3000);
	system("cls");
}
printf("����ܹ�Ӯ�ľ���Ϊ%d\n", x);
printf("�����ܹ�Ӯ�ľ���Ϊ%d\n", y);
if (x > y) {
	printf("��һ�ʤ\n");
}
if (x < y) {
	printf("���Ի�ʤ\n");
}
if (x == y) {
	printf("˫��ƽ��\n");
}
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