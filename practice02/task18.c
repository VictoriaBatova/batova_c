#include <stdio.h>

int main(){
    int n, number, count = 0;
    printf("Введите кол-во чисел...\n");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        if(number % 7 == 0){
           count ++; 
        }
    }

    printf("%d\n", count);
    return 0;
}