#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int a, k, c;

	printf("Enter number: ");
	scanf("%d", &a);

	printf("Enter number of bit: ");
	scanf("%d", &k);

	c = (a >> k) & 1;
	printf("%d\n", c);

	return 0;
}
