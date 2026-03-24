#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int *p = &a;
    int *s = &b;
    int t;

    printf("До: %d %d\n", *p, *s);

    t = *p;
    *p = *s;
    *s = t;

    printf("После: %d %d\n", *p, *s);

    return 0;
}