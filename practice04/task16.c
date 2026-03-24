#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
    }
    
    int *p = arr;
    int *s = mas;
    int count = 0;
    for(int i = 0; i < n; i++, p++, s++){
        if(*p == *s){count++;}
    }
    
    if(count == n){printf("Равны\n");}
    else{printf("Не равны\n");}
    
    return 0;
}