#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0, b = 0;
	printf("�������������֣����ÿո������\n");
	scanf("%d %d", &a, &b);
	int num1 = a;
	int num2 = b;
	while (int c = a % b) {
		a = b;
		b = c;
	}
	printf("���Լ��Ϊ%d\n",b);
	int num = num1* num2 / b;
	printf("��С������Ϊ%d\n", num);
	return 0;
}