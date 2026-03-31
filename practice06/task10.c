#include <stdio.h>

int count_digits(int n){
    int count = 0;
    if(n == 0){count = 1;}
    else while(n != 0){
        n = n / 10;
        count++;
    }
    return count;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", count_digits(a));
    return 0;
}