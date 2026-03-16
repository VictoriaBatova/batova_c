#include <stdio.h>

int main(){
    int n, a = 1;
    scanf("%d", &n);

    for(int i = 3; i < n; i += 3){
        a *= i;
    }

    printf("%d\n", a);
    return 0;
}