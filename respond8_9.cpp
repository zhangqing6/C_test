#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	printf("��ʼ�����һ�����֣��㽫������ȥ���䣬�Ƿ�ʼ��Ϸ������1��ʼ��\n");
	int a = 0;
	scanf("%d",&a);
	if (a == 1) {
		printf("18379203032\n");
		Sleep(3000);
		system("cls");
		printf("��������ȷ������\n");
		char arr[20] = { 0 };
		scanf("%s", arr);
		if (strcmp(arr, "18379203032") == 0) {

			printf("��ȷ\n");

		}
		else {
			printf("ʧ��");
		}
	}
	else {

		;
	}
	return 0;
}