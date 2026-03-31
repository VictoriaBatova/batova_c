#include <stdio.h>

void inc_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i]++;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    inc_array(arr, n);
    return 0;
}