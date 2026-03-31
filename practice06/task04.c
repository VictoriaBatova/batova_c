#include <stdio.h>

int is_even(int x){
    int count = 0;
    if(x % 2 == 0){
        count = 1;
    }
    return count;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", is_even(a));
    return 0;
}