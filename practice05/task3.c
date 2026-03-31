#include <stdio.h>

int main(){
    char str[] = "Hello, World!";
    char *p = str;
    int n = 0;
    while(*p != '\0'){
        n++;
        p++;
    }
    for(int i = n; i >= 0; i--, p--){
        printf("%c", *p);
    }
    printf("\n");
    return 0;
}