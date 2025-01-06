#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int a, i, j, bit_i, bit_j;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Enter the first bit of number(at 0 to 7): ");
    scanf("%d", &i);

    printf("Enter the second bit of number(at 0 to 7): ");
    scanf("%d", &j);

    bit_i = (a >> i) & 1;
    bit_j = (a >> j) & 1;

    if (bit_i != bit_j) {
        if (bit_i == 1) {
            a &= ~(1 << i); // bit I = 0
        }
        else {
            a |= (1 << i); // make I
        }

        if (bit_j == 1) {
            a &= ~(1 << j); // bit J = 0
        }
        else {
            a |= (1 << j); // make J
        }
        printf("first bit != second bit, %d\n", a);
    }
    else {
        printf("first bit == second bit, %d\n", a);
    }
    return 0;
}
