#include <stdio.h>

int max(int x, int y){
    int maxim = x;
    if(x < y){
        maxim = y;
    }
    return maxim;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}