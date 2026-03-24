#include <stdio.h>

int main(){
    int n, count = 1;
    scanf("%d", &n);

    for(int i = 1; i * 2 <= n; i++){
        if(n % i == 0){
            count += 1;
        }
    }
    if(count == 2){
        printf("%d простое\n", n);
    }
    else{printf("%d составное\n", n);}
    return 0;
}