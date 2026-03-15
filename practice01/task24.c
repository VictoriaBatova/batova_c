#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите 3 числа...\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%.2f\n", (a + b)*c/2.0);
    return 0;
}