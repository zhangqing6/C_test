#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	printf("Are you ready?(Yes or NO)");
	Sleep(3000);
	system("cls");
	char arr3[10] = { 0 };
	scanf("%s", arr3);
	if (strcmp(arr3, "Yes") == 0) {
		system("cls");
		int a = 3, b = 2, c = 1;
		printf("%d", a);
		Sleep(1000);
		system("cls");
		printf("%d", b);
		Sleep(1000);
		system("cls");
		printf("%d", c);
		Sleep(1000);
		system("cls");
		char arr1[10] = { 0 };
		printf("����������Ҫ����ĸ\n");
		scanf("%s", arr1 );
		Sleep(1000);
		system("cls");
		char arr2[10] = { 0 };
		printf("�����ո��������ĸ\n");
		scanf("%s", arr2);
		if (strcmp(arr1,arr2) == 0) {

			printf("�ɹ�");
		}
		else {
			printf("ʧ��");
		}
	}
	else if(strcmp(arr3,"No")==0){

		printf("\n�ǲ����治��");
	}
	return 0;
}