#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int summ = 0;
    for(int i = 0; i < n; i++){
        summ += arr[i];
    }
    printf("%d\n", summ);
    return 0;
}