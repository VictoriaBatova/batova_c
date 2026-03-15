#include <stdio.h>

int main(){

    int a, b;
    printf("Введите 2 целых числа: \n");
    scanf("%d %d", &a, &b);

    float del = (float)a / b;
    printf("%d : %d = %.1f\n", a, b, del);

    return 0;
}
