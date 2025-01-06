#include <stdio.h>
#pragma warning(disable: 4996)

unsigned int combine_bits(unsigned int num, int len, int i) {
    // �������� ������ i �����
    unsigned int first_i_bits = (num >> (len - i));

    // �������� ��������� i �����
    unsigned int last_i_bits = num & ((1U << i) - 1);

    // ��������� ��
    return (first_i_bits << i) | last_i_bits;
}

int main() {
    unsigned int num;
    int len, i;

    printf("������� ����� (� ���������� �������): ");
    scanf("%u", &num);

    printf("������� ����� ����� � �����: ");
    scanf("%d", &len);

    printf("������� ���������� ����� ��� ���������� (i): ");
    scanf("%d", &i);

    if (i > len) {
        printf("������: i �� ����� ���� ������ ����� �����.\n");
        return 1;
    }

    unsigned int result = combine_bits(num, len, i);
    printf("��������� ����������: %u\n", result);

    return 0;
}
