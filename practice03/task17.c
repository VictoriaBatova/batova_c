#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0], ind;
    
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            ind = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(i > ind){arr[i] = 0;}
        printf("%d ", arr[i]);
    }

    return 0;
}