#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int a = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = a;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

     printf("\n");
    return 0;
}