#include <stdio.h>

int main(){
    int a = 10;
    printf("Значение переменной: %d\n", a);
    printf("Адрес переменной: %p\n", (void*)&a);
    return 0;
}