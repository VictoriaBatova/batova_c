#include <stdio.h>

int main() {
    float a;
    printf("Введите температуру в °С\n");
    scanf("%f", &a);

    printf("%.2f °С = %.2f °F\n", a, a * 1.8 + 32);
    printf("%.2f °С = %.2f K\n", a, a + 273);
    return 0;
}