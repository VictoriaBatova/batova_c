#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    int result_int = a / b;
    printf("Результат целочисленного деления: %d\n", result_int);

    float result_float = (float)a / b;
    printf("Результат деления с плавающей точкой: %f\n", result_float);

    return 0;
}