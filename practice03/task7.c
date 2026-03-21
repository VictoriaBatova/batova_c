#include <stdio.h>

int main(){
    int n;
    double sr;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        sr += arr[i];
    }

    printf("%f\n", sr / n );
    return 0;
}