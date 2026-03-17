#include <stdio.h>

int main(){
    int n, number, max;
    printf("Введите кол-во чисел...\n");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    scanf("%d", &number);
    max = number;
    
    for(int i = 1; i < n; i++){
        scanf("%d", &number);
        if(number > max){
           max = number; 
        }
    }

    printf("%d\n", max);
    return 0;
}