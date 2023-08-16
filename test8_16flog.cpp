#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int flogjump(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	else
		return flogjump(n - 1) + flogjump(n - 2);
}
int main() {
	printf("请输入青蛙要上台阶的个数\n");
	int num = 0;
	scanf("%d", &num);
	int answer = flogjump(num);
	printf("跳法有%d种\n", answer);
	return 0;
}