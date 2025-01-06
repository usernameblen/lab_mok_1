#include <stdio.h>

#define CIRCULAR_LEFT_SHIFT(x, n)  (((x) << (n)) | ((x) >> (2 * sizeof(x) * 8 - (n))))
#define CIRCULAR_RIGHT_SHIFT(x, n) (((x) >> (n)) | ((x) << (2 * sizeof(x) * 8 - (n))))

int main() {
    unsigned int num = 0b10110011; // �����
    int n = 3; // ������

    printf("�������� �����: %u\n", num);

    unsigned int left_shifted = CIRCULAR_LEFT_SHIFT(num, n);
    unsigned int right_shifted = CIRCULAR_RIGHT_SHIFT(num, n);

    printf("����������� ����� ����� �� %d ���: %u\n", n, left_shifted);
    printf("����������� ����� ������ �� %d ���: %u\n", n, right_shifted);

    return 0;
}