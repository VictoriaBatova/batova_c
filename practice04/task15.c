#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    int *s = mas;

    for(int i = 0; i < n; i++){
        *s = *p;
        p++;
        s++;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", mas[i]);
    }

    printf("\n");
    return 0;
}