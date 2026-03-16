#include <stdio.h>

int main(){
    int n, summ = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
        summ += i;
        }
    }

    printf("%d\n", summ);
    return 0;
}