#include <stdio.h>

int main(){
    int n, summ = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int t = i;
        while(t > 0){
            summ += t % 10;
            t /= 10;
        }
    if(summ > 10){printf("%d\n", i);}
    summ = 0;
    }

    return 0;
}