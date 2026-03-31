#include <stdio.h>

void calc(int a, int b, int *sum, int *mul){
    *sum = a + b;
    *mul = a * b;
    printf("sum: %d, mul: %d\n", *sum, *mul);
}

int main(){
    int a, b, sum = 0, mul = 1;
    scanf("%d %d", &a, &b);
    calc(a, b, &sum, &mul);
    return 0;
}