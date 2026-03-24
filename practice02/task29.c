#include <stdio.h>
#include <limits.h>

int main(){
    int n, max;
    scanf("%d", &n);
    max = INT_MIN;
    
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);

        if(num % 5 == 0){
            max = num;
        }
    }

    if(max != INT_MIN){printf("%d\n", max);}
    else{printf("Среди чисел нет тех, которые делятся на 5\n");}
    
    return 0;
}