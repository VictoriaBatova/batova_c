#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int *p = arr;
    int count = 0;
    for(int i = 0; i < n; i++, p++){
        if(*p > x){
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}