#include <stdio.h>

int main(){
    int n, summ = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){summ += i;}
    }
    printf("%d\n", summ);
    return 0;
}