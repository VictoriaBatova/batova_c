#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите 3 числа...\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b == c){
        printf("%d, %d, %d -- магическая тройка\n", a, b, c);
    }
    else{
         printf("%d, %d, %d -- не магическая тройка\n", a, b, c);
    }

    return 0;
}