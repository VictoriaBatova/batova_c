#include <stdio.h>

int main(){
    int n;
    printf("Введите число...\n");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
           printf("%d\n", i * i); 
        }
    }
    return 0;
}