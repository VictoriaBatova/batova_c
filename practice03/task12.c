#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

     for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", -1);
    return 0;
}