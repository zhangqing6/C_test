#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void test(int arr1[3][3]) {
	int i, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {

			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}
int calculate(int arr3[3][3], int arr4[3][3]) {
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {

			if (arr3[i][j] = arr4[i][j])
			{
				count++;
			}
		}
		
	}if (count == 8) {
		return 1;
	}
	else return 0;
}
int main()
{
	int arr1[3][3] = { 0,0,0,0,0,0,0,0,0 };
	test(arr1);
Play:
	int choice = 0;
	scanf("%d", &choice);
	switch (choice) {
	case 1:test(arr1);
		Sleep(1000);
		system("cls");
		arr1[2][0] = 1;
		arr1[1][0] = 1;
		arr1[2][1] = 1;
		test(arr1);
		break;
	case 2:
		Sleep(1000);
		system("cls");
		arr1[2][0] = 1;
		arr1[2][2] = 1;
		arr1[2][1] = 1;
		arr1[1][1] = 1;
		test(arr1); 
		break;
	case 3:
		Sleep(1000);
		system("cls");
		arr1[1][2] = 1;
		arr1[2][2] = 1;
		arr1[2][1] = 1;
		test(arr1); break;
	case 4:
		Sleep(1000);
		system("cls");
		arr1[0][0] = 1;
		arr1[1][0] = 1;
		arr1[1][1] = 1;
		arr1[2][0] = 1;
		test(arr1); break;
	case 5:
		Sleep(1000);
		system("cls");
		arr1[0][1] = 1;
		arr1[1][0] = 1;
		arr1[1][1] = 1;
		arr1[2][1] = 1;
		arr1[1][2] = 1;
		test(arr1); break;
	case 6:
		Sleep(1000);
		system("cls");
		arr1[0][2] = 1;
		arr1[1][1] = 1;
		arr1[1][2] = 1;
		arr1[2][2] = 1;
		test(arr1); break;
	case 7:
		Sleep(1000);
		system("cls");
		arr1[0][0] = 1;
		arr1[0][1] = 1;
		arr1[1][0] = 1;
		test(arr1); break;
	case 8:
		Sleep(1000);
		system("cls");
		arr1[0][0] = 1;
		arr1[0][1] = 1;
		arr1[0][2] = 1;
		arr1[1][1] = 1;
		test(arr1); break;
	case 9:
		Sleep(1000);
		system("cls");
		arr1[0][2] = 1;
		arr1[0][1] = 1;
		arr1[1][2] = 1;
		test(arr1); break;
	}
	int arr2[3][3] = { 0,0,0,0,0,0,0,0,0 };
	if (calculate(arr1, arr2))
	{
		printf("³É¹¦\n");

	}
	else
		goto Play;

	return 0;
}






