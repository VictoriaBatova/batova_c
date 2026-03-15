#include <stdio.h>
#include <limits.h>

int main(){
    int a;
    printf("Ввежите число...\n");
    scanf("%d", &a);

    a += INT_MAX;
    printf("a = %d\n", a);
    return 0;
}