#include <stdio.h>
#pragma warning(disable: 4996)

unsigned int get_middle_bits(unsigned int num, int len, int i) {

    // —двигаем число, чтобы удалить первые i и последние i битов
    unsigned int middle_bits = (num >> i) & ~(((1U << (len - 2 * i)) - 1) | ((1U << i) - 1));

    return middle_bits;
}

int main() {
    unsigned int num;
    int len, i;

    printf("¬ведите число (в дес€тичном формате): ");
    scanf("%u", &num);

    printf("¬ведите длину числа в битах: ");
    scanf("%d", &len);

    printf("¬ведите количество битов (i): ");
    scanf("%d", &i);

    if (i > len / 2) {
        printf("ќшибка: i не может быть больше половины длины числа.\n");
        return 1;
    }

    unsigned int result = get_middle_bits(num, len, i);
    printf("Ѕиты между первыми и последними i битами: %u\n", result);

    return 0;
}
