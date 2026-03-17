#include <stdio.h>

int main(){
    int a, b = 1;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        if(i % 2 != 0){
            b *= i;
        }
    }
    printf("%d\n", b);
    return 0;
}