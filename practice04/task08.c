#include <stdio.h>

int main(){
    int a = 6;
    int *p = &a;
    int **pp = &p;
    **pp = 9;
    printf("%d\n", *p);
    return 0;
}