#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main() {
	char arr1[] = "欢迎来到王者荣耀";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("欢迎来到王者荣耀");
		return 0;
}