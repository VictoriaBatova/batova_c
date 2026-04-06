#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.14f;
    char c = 'A';

    printf("a = %d, adress = %p\n", a, (void*)&a);
    printf("b = %.2f, adress = %p\n", b, (void*)&b);
    printf("c = %c, adress = %p\n", c, (void*)&c);

    return 0;
}