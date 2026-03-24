#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            count++;
        }
    }

    if(count > 0){
        printf("YES\n");
    }
    else{printf("NO\n");}

    return 0;
}