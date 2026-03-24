#include <stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    printf("%zu\n", sizeof p);
    return 0;
}