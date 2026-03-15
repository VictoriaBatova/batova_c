#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Введите 3 числа: ");
    scanf("%d %d %d", &a, &b, &c);

    float sr = (float)(a + b + c) / 3;
    printf("Среднее значение: %f\n", sr);

    return 0;
}