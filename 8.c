#include <stdio.h>
#pragma warning(disable: 4996)

int maxPowerOfTwo(int n) {
    // ������� ������: ���� ����� 0, ���������� 0
    if (n == 0) return 0;

    // �������� �� ��������
    if (n % 2 != 0) return 0;

    // ���������� ����� ����� �� 2 � ��������� 1 � ��������
    return 1 + maxPowerOfTwo(n / 2);
}

int main() {
    int a;

    // ���� ����� �� ������������
    printf("������� ����� �����: ");
    scanf("%d", &a);

    // ���������� ������������ ������� 2
    int result = maxPowerOfTwo(a);

    // ����� ����������
    printf("������������ ������� 2, �� ������� ������� %d: %d\n", a, result);

    return 0;
}
