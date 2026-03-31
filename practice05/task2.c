#include <stdio.h>

int main(){
    char str[] = "Hello, World!";
    char *p = str;
    int count = 0;
    while(*p != '\0'){
        count++;
        p++;
    }
    printf("%d\n", count);
    return 0;
}