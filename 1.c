//1. ������� �� ����� ������� ��� ����� �
#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int a, k;

	printf("Enter number:\n");
	scanf("%d", &a);

	k = a & 1;
	printf("%d\n", k);

	return 0;
}