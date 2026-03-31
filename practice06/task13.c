#include <stdio.h>

int sum_array(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[3] = {1, 2, 3};
    printf("%d\n", sum_array(arr, 3));
    return 0;
}