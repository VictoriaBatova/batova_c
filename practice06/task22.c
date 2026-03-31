#include <stdio.h>

void swap(int *a, int *b){
    int vr;
    vr = *a;
    *a = *b;
    *b = vr;
    printf("%d %d\n", *a, *b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
}