#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return calculate(n - 1) + calculate(n - 2);
	}
	return 0;
}
int main() {
	int choice = 0;
	printf("����������Ҫ��֪������");
	scanf("%d", &choice);
	int num = calculate(choice);
	printf("%d", num);
	return 0;
}