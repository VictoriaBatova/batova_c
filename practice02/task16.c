#include <stdio.h>

int main(){
    int n, count = 0;
    printf("Введите числа (0 для окончания)...\n");
    scanf("%d", &n);
    
    while(n != 0){
        count++;
        scanf("%d", &n);
    }

    printf("Кол-во введённых чисел %d\n", count);
    return 0;
}