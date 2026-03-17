#include <stdio.h>

int main(){
    int n, number;
    printf("Введите кол-во чисел...\n");
    scanf("%d", &n);

    printf("Введите %d чисел:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        if(number > 10){
           printf("%d\n", number); 
        }
    }
    return 0;
}