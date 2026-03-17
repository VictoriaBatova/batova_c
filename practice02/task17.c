#include <stdio.h>

int main(){
    int n, summ = 0;
    printf("Введите числа (0 для окончания)...\n");
    scanf("%d", &n);
    
    while(n != 0){
        if(n > 0){
        summ += n;
        }
        scanf("%d", &n);
    }

    printf("Сумма = %d\n", summ);
    return 0;
}