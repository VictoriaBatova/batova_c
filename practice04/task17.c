#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *p = arr;
    int otr = 0;
    for(int i = 0; i < n; i++, p++){
        if(*p < 0){
            otr = *p;
            break;
        }
    }

    if(otr != 0){printf("%d\n", otr);}
    else{printf("В массиве нет отрицательных чисел\n");}
    return 0;
}