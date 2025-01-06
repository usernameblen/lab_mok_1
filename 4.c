#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	unsigned int a;
	int k, value;

	printf("Enter number: ");
	scanf("%d", &a);

	// number of bit
	do {
		printf("Enter number of bit(0-7): ");
		scanf("%d", &k);
		if (k >= 8 || k < 0) {
			printf("NOOO!!!! at 0 to 7\n");
		}
	} while (k >= 8 || k < 0);

	value = (a & ~(1 << k)); // kill the bit K(obnulenie)

	printf("%d\n", value); 

	return 0;
}
