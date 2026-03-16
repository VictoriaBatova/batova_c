#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        int sq = i * i;
        if(sq > 50){
        printf("%d\n", sq);
        }
    }

    return 0;
}