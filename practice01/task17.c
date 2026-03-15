#include <stdio.h>

int main() {
    int a, b;

    printf("Введите 2 числа...\n");
    scanf("%d %d", &a, &b);

    printf("До: a = %d, b = %d\n", a, b);

    a += b;
    b = a - b;
    a -= b;

    printf("После: a = %d, b = %d\n", a, b);

    return 0;
}