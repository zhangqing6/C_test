#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[75] = { 0 };
	int t = 0;
	int h = 0;
	for (int i = 0; i < n; i++ ) {
		scanf("%d", &arr[i]);

	}
	for (int i = 0; i < n; i++) {
		for (int a = 0; a < arr[i] - 1; a++) {
			printf("-");
		}
		int z = (arr[i] - 2) / 2;
		 t= arr[i] - 1;
		printf("\n");
			for (int b = 0; b < z; b++) {
				printf("\\");
				
				if (b == 0) {
					for (int c = 0; c < t - 2; c++) {
						printf(" ");
					}
					t = t - 2;
				}
				else {
					for (int c = 0; c < t - 2; c++) {
						printf("*");
					}
					t = t - 2;
				}
				printf("/");
				if (b != z - 1) {
					printf("\n");
					for (int d = -1; d < b; d++) {
						printf(" ");
					}
				}
				h = b;
		    }
			printf("\n");
			for (int v = h; v >=0; v--) {
				
			 for (int d =v; d >0; d--) {
						printf(" ");
			 }
				
				printf("/");

				for (int e = t; e > 0; e--) {
					if ((t + 1) / 2 == e) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
				printf("\\");
				t = t + 2;

				printf("\n");


			}
			for (int a = 0; a < arr[i] - 1; a++) {
				printf("-");
			}
			printf("\n");
	}
	return 0;
}