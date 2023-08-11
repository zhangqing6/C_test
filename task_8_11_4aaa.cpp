#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("«Î‘§…Ë√‹¬Î\n");
	scanf("%s", arr1);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n«Î ‰»Î√‹¬Î\n");
		scanf("%s", arr2);
		if (strcmp(arr1, arr2) == 0) 
		{
			printf("µ«»Î≥…π¶\n");
			break;
		}
		else {
			printf("√‹¬Î¥ÌŒÛ\n");
		}
	}
	if (3 == i)
	{
		printf("µ«»Î ß∞‹\n");
	}
	return 0;
}