#include<stdio.h>
#include<math.h>
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
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2) {
if (test(i))
{
	printf("%d\n", i);
	count++;
}


	}
	printf("count=%d", count);


	return 0;
}