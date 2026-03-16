#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 3; n > i; i += 3){
        printf("%d\n", i);
    }

    return 0;
}