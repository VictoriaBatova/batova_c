#include <stdio.h>

int main(){
    int a = 6;
    int *p = &a;
    int **pp = &p;
    printf("%d\n", *p);
    return 0;
}