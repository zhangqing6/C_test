#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
void swap(int* px, int* py,int*pz) {
int m = *px;
*px = *py;
*py=*pz;
*pz = m;
}
int test(int n) {
	int j = 0;
	for (j = 2; j <= sqrt(n); j++) {
		if (n % j == 0) {

			return 0;
		}
	}
	return 1;
}
int main() {
	printf("����������ֵ(�ÿո����)\n");
	int i=0,a = 0, b = 0,c=0;
	scanf("%d %d %d", &a, &b,&c);
	for (i = 0; i < 3; i++) {
		
		swap(&a,&b,&c);
		printf("%d %d %d", a, b, c);
		Sleep(2000);
		system("cls");
	}
	printf("�����뽻��������֣��ÿո������\n");
	int num1 = 0, num2 = 0, num3 = 0;
	scanf("%d %d %d", &num1, &num2, &num3);
	Sleep(2000);
	system("cls");
	if (num1 == a && num2 == b && num3 == c) {
		printf("��ϲ�㣬�ش���ȷ\n");
	}
	else {
		printf("�ش����\n");
	}
	int count = 0;
	if (test(a)) {
		printf("aΪ����%d\n", a);
		count++;
	}
	if (test(b)) {
		printf("bΪ����%d\n", b);
		count++;
	}if (test(c)) {
		printf("cΪ����%d\n", c);
		count++;
	}

	printf("�������еĸ���Ϊ%d", count);

	return 0;
}