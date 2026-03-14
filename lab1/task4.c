#include <stdio.h>

int main() {
    int a, b;

    printf("Введите 2 целых числа");
    scanf("%d %d", &a, &b);

     if (b == 0) {
        printf("Ошибка: деление на ноль невозможно!\n");
        return 1;
    }
    
    int remainder = a % b;

    printf("Остаток от деления %d на %d равен %d\n", a, b, remainder);
    
    return 0;
}