#include <stdio.h>

int main(){
    int a, b;

    printf("Введите 2 числа: ");
    scanf("%d %d", &a, &b);

    printf("Сумма %d + %d = %d\n", a, b, a + b);
    printf("Разность %d - %d = %d\n", a, b, a - b);
    printf("Произведение %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Результат деления %d : %d = %d\n", a, b, a / b);
    } else{
            printf("Деление на нольне невозможно\n");
    }
    return 0;
}