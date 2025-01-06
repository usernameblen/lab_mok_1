#include <stdio.h>
#pragma warning(disable: 4996)

unsigned int get_middle_bits(unsigned int num, int len, int i) {

    // �������� �����, ����� ������� ������ i � ��������� i �����
    unsigned int middle_bits = (num >> i) & ~(((1U << (len - 2 * i)) - 1) | ((1U << i) - 1));

    return middle_bits;
}

int main() {
    unsigned int num;
    int len, i;

    printf("������� ����� (� ���������� �������): ");
    scanf("%u", &num);

    printf("������� ����� ����� � �����: ");
    scanf("%d", &len);

    printf("������� ���������� ����� (i): ");
    scanf("%d", &i);

    if (i > len / 2) {
        printf("������: i �� ����� ���� ������ �������� ����� �����.\n");
        return 1;
    }

    unsigned int result = get_middle_bits(num, len, i);
    printf("���� ����� ������� � ���������� i ������: %u\n", result);

    return 0;
}
