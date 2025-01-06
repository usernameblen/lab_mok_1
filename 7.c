#include <stdio.h>
#pragma warning(disable: 4996)

unsigned int swap_bytes(unsigned int num, int order[4]) {
    unsigned int result = 0;
    for (int i = 0; i < 4; i++) {
        result |= ((num >> (order[i] * 8)) & 0xFF) << (i * 8);
    }
    return result;
}

int main() {
    unsigned int num;
    int order[4];

    printf("������� 32-��������� ����� ����� (� ���������� �������): ");
    scanf("%u", &num);

    printf("������� ������� ������������ ������ (4 ����� �� 0 �� 3): ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &order[i]);
    }

    unsigned int swapped_num = swap_bytes(num, order);
    printf("�������������� �����: %u\n", swapped_num);

    return 0;
}
