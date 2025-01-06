#include <stdio.h>
#pragma warning(disable: 4996)
// ������ ��� ��������� k-�� ���� � �������� ��������
#define SET_BIT(a, k, value) ((value) ? ((a) | (1 << (k))) : ((a) & ~(1 << (k))))

int main() {
    unsigned int a;
    int k, value;

    // ������ ����� �� ������������
    printf("������� �����: ");
    scanf("%u", &a);

    // ������ ������ ����
    printf("������� ����� ���� ��� ��������� (������� � 0): ");
    scanf("%d", &k);

    // ������ �������� ���� (0 ��� 1)
    printf("������� �������� ���� (0 ��� 1): ");
    scanf("%d", &value);

    if (value != 0 && value != 1) {
        printf("�������� �������� ����. ����������� 0 ��� 1.\n");
        return 1;
    }

    // ��������� ���� � ������� �������
    a = SET_BIT(a, k, value);

    printf("���������: %u\n", a);
    return 0;
}
