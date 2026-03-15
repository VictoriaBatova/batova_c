#include <stdio.h>

int main() {
    int a;
    printf("Введите число для проверки на чётность: \n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("Чётное\n");
    }
    else{
       printf("Нечётное\n"); 
    }
    return 0;
}