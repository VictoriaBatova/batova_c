#include <stdio.h>

int main(){
    char str[] = "hello world";
    char *p = str;
    char n;
    scanf("%c", &n);
    while(*p){
        if(*p != n){
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
    return 0;
}