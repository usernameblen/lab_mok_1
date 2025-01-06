#include <stdio.h>
#pragma warning(disable: 4996)
// Макрос для установки k-го бита в заданное значение
#define SET_BIT(a, k, value) ((value) ? ((a) | (1 << (k))) : ((a) & ~(1 << (k))))

int main() {
    unsigned int a;
    int k, value;

    // Запрос числа от пользователя
    printf("Введите число: ");
    scanf("%u", &a);

    // Запрос номера бита
    printf("Введите номер бита для установки (начиная с 0): ");
    scanf("%d", &k);

    // Запрос значения бита (0 или 1)
    printf("Введите значение бита (0 или 1): ");
    scanf("%d", &value);

    if (value != 0 && value != 1) {
        printf("Неверное значение бита. Используйте 0 или 1.\n");
        return 1;
    }

    // Установка бита с помощью макроса
    a = SET_BIT(a, k, value);

    printf("Результат: %u\n", a);
    return 0;
}
