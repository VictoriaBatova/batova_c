#include <stdio.h>

int main() {
    int a;
    printf("Введите целое число: \n");
    scanf("%d", &a);
    if(a % 3 == 0 && a % 4 == 0){
        printf("%d : 3 == %d\n", a, a / 3);
        printf("%d : 4 == %d\n", a, a / 4);
    }
    else{
        printf("Число не делится нацело на 3 и 4\n");
    }
    return 0;
}