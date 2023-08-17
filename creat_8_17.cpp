#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0, b = 0;
	printf("请输入两个数字（并用空格隔开）\n");
	scanf("%d %d", &a, &b);
	int num1 = a;
	int num2 = b;
	while (int c = a % b) {
		a = b;
		b = c;
	}
	printf("最大公约数为%d\n",b);
	int num = num1* num2 / b;
	printf("最小公倍数为%d\n", num);
	return 0;
}