#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int sr = sum / n;
    for(int i = 0; i < n; i++){
        if(arr[i] > sr){count++;}
    }
    printf("%d\n", count);
}