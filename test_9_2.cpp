#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int choice = 0,sum=0;
	printf("请输入一个数字\n");
	scanf("%d", &choice);
	int i = 0,count=0;
	for (i = 0; i < 32; i++) {
		sum = choice & 1;
		if (sum == 1) {
			count++;
		}
		choice >>= 1;
	}
	printf("补码中1的个数为:%d", count);
	return 0;
}