#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int x = 5, y = 2;

    printf("%d\n", sum(x, y));
    return 0;
}