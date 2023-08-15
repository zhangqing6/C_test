#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(unsigned int n) {
	if (n >9) {
		print(n /10);
	}
	int num=0;
	num = n % 10;
	if (num < 9) {
		printf("%d", 9);
	}
}
int calculate(int num) {
	int count = 0;
	while (num != 0) {
		count++;
		num = num / 10;
	}
	return count;

}
int main() {
	printf("请输入你想要的数字\n");
	unsigned int num = 0;
	scanf("%u", &num);
	int x = calculate(num);
	int sum = 0;
	sum = ((1 + calculate(num)) * calculate(num)) / 2;
	printf("总共9的个数为%d\n", sum);
	while (x != 0) {
		print(num);
		num = num / 10;
		x--;
	}
	return 0;
}