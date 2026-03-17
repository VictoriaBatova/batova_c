#include <stdio.h>

int main(){
    int n, number, summ = 0;
    printf("Введите кол-во чисел...\n");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        if(number < 0){
           summ += number; 
        }
    }
    printf("Сумма отрицательных чисел = %d\n", summ);
    return 0;
}