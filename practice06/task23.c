#include <stdio.h>

void max2(int a, int b, int *res){
    if(a > b){
        *res = a;
    }else{*res = b;}
    printf("%d\n", *res);
}

int main(){
    int res, a, b;
    scanf("%d %d", &a, &b);
    max2(a, b, &res);
    return 0;
}