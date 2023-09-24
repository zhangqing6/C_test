#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isLeep(int year) {
	if (year / 4 == 0 && year / 100 != 0 || year / 400 == 0) {
		return 1;
	}

	else {
		return 0;
	}
}
int day(int year, int mon, int date) {
	int dayshu = 0, leep=0;
	leep = isLeep(year);
		switch (mon) {
		case 12:
			dayshu += 30;
		case 11:
			dayshu += 31;
		case 10:
			dayshu += 30;
		case 9:
			dayshu += 31;
		case 8:
			dayshu += 31;
		case 7:
			dayshu += 30;
		case 6:
			dayshu += 31;
		case 5:
			dayshu += 30;
		case 4:
			dayshu += 31;
		case 3:
			dayshu += 28+leep;
		case 2:
			dayshu += 31;
		
		}
		dayshu += date;
		return dayshu;
}
int main() {
	int a = 0, b = 0, c = 0;
	int x = 2022;
	int num1 = 0;
	int num2 = 0;
	int day1 = 0;
	int day2 = 0;
	while ((scanf("%d %d %d", &a, &b, &c) != EOF)) {

		for (x=2022; x < a; ++x) {

			num1 = num1 + 365 + isLeep(x);
		}
		day1 = day(a, b, c);
		day2 = day(2022, 4, 23);
		num2 = num1 + day1 - day2;
		printf("%d\n", num2);
		num1 = 0; 
		num2 = 0;
	}
	return 0;
}