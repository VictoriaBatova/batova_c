#include <stdio.h>

int main(){
    int a = 6;
    int *s = &a;
    int *p = &*s;
    printf("%d %d\n", *s, *p);
    return 0;
}