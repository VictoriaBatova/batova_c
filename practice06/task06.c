#include <stdio.h>

int max3(int a, int b, int c){
    int maxim = a;
    if(b > c && b > a){
        maxim = b;
    }
    else if(c > b && c > a){
        maxim = c;
    }
    return maxim;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max3(a, b, c));
    return 0;
}