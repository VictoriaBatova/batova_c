#include <stdio.h>

int main(){
    int n, pr = 1;
    scanf("%d", &n);
    
    if (n < 0) {
        n = -n;
    }    
    
    while(n > 0){
        if(n % 10 != 0){
            pr *= n % 10;
            }
        n /= 10;
    }
    
    printf("%d\n", pr);
    return 0;
}