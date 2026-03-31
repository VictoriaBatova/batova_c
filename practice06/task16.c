#include <stdio.h>

int find(int arr[], int n, int x){
    int ind = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){ind = i;}
    }
    return ind;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    printf("%d\n", find(arr, n, x));
    return 0;
}