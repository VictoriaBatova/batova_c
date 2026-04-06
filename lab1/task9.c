#include <stdio.h>
#include <math.h>

int main() {
    double x, result1, result2;

    printf("Введите число x: ");
    scanf("%lf", &x);

    result1 = pow(x, 2) + 2 * x + 1;

    result2 = pow(x + 1, 2) - pow(x - 1, 2);

    printf("Значение выражения x^2 + 2x + 1 = %.2lf\n", result1);
    printf("Значение выражения (x + 1)^2 - (x - 1)^2 = %.2lf\n", result2);

    return 0;
}