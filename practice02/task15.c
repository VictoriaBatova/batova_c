#include <stdio.h>

int main(){
    int n, number, min;
    printf("Введите кол-во чисел...\n");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    scanf("%d", &number);
    if(number % 2 == 0){
    min = number;
    }
    
    for(int i = 1; i < n; i++){
        scanf("%d", &number);
        if(number < min && number % 2 == 0){
           min = number; 
        }
    }

    printf("%d\n", min);
    return 0;
}