#include <stdio.h>

int main(){
    int a, b , c;
    printf("Введите 3 числа: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d\n", a);
    }
    if(a>b && b>c){
        printf("%d\n", b);
    }
    if(c>b && c>a){
        printf("%d\n", c);
    }
    return 0;
}