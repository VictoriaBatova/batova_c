#include <stdio.h>

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *arr);
        arr++;
    }
}

int main(){
    int arr[3] = {1, 2, 3};
    print_array(arr, 3);
    return 0;
}