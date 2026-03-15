#include <stdio.h>

int main(){
    int a;
    printf("Введите число от 0 до 100... \n");
    scanf("%d", &a);
    if(a>100){
        printf("Число не может быть больше 100\n");

    }
    else if(a>=90 && a<=100){
        printf("Отлично\n");
    }
    else if(a>=75 && a<=89){
        printf("Хорошо\n");
    }
    else if(a>=60 && a<=74){
        printf("Удовлетворительно\n");
    }
    else {
        printf("Неудовлетворительно\n");
    }
    return 0;
}