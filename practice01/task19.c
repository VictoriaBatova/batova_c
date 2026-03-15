#include <stdio.h>

int main(){
    int a;
    printf("Введите число...\n");
    scanf("%d", &a);

    printf("Таблица умножения %d от 1 до 10:\n", a);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}