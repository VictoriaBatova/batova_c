#include <stdio.h>

int main(){
    int a, count = 0;
    scanf("%d", &a);

    for(int i = 1; i * 2 <= a; i++){
        if(a % i == 0){
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}