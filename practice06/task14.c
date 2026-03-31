#include <stdio.h>

int max_array(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){max = arr[i];}
    }
    return max;
}

int main(){
    int arr[3] = {3, 2, 1};
    printf("%d\n", max_array(arr, 3));
    return 0;
}