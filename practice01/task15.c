#include <stdio.h>

int main() {
    int a;
    printf("Введите число...\n");
    scanf("%d", &a);

    if(a % 2 == 0 && a % 3 == 0 && a % 5 == 0){
        printf("%d делится на 2, 3 и 5 без остатка\n", a);
        return 0;
    }

    if(a % 2 == 0){
        printf("%d делится на 2 без остатка\n", a);
    }
    else{
        printf("%d делится на 2 с остатком %d\n", a, a % 2);
    }
    
    if(a % 3 == 0){
        printf("%d делится на 3 без остатка\n", a);
    }
    else{
        printf("%d делится на 3 с остатком %d\n", a, a % 3);
    }
    
    if(a % 5 == 0){
        printf("%d делится на 5 без остатка\n", a);
    }
    else{
        printf("%d делится на 5 с остатком %d\n", a, a % 5);
    }
    
    return 0;
}