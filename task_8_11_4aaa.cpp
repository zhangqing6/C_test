#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("��Ԥ������\n");
	scanf("%s", arr1);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n����������\n");
		scanf("%s", arr2);
		if (strcmp(arr1, arr2) == 0) 
		{
			printf("����ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("����ʧ��\n");
	}
	return 0;
}