#include <stdio.h>

int main(){
    int a = 5;

    printf("Исходное значение a: %d\n", a);

    printf("a++: %d (после операции a = %d)\n", a++, a);
    
    printf("++a: %d (после операции a = %d)\n", ++a, a);
    
    printf("a--: %d (после операции a = %d)\n", a--, a);
    
    printf("--a: %d (после операции a = %d)\n", --a, a);

    return 0;
}