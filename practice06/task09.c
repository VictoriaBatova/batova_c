#include <stdio.h>

int fact(int n){
    int zn_fact = 1;
    for(int i = 1; i <= n; i++){
        zn_fact *= i;
    }
    return zn_fact;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", fact(a));
    return 0;
}