#include <stdio.h>

int main(){
    int a;

    printf("Введите число...\n");
    scanf("%d", &a);

    if(a > 0){
        printf("%d\n", a*a);
        return 0;
    }

    if(a == 0){
        printf("%d\n", 0);
        return 0;
    }

    if(a < 0){
        printf("%d\n", -a);
        return 0;
    }
}