#include <stdio.h>

int my_strlen(char str[]){
    int count = 0;
    char *p = str;
    while(*p){
        count++;
        p++;
    }
    return count;
}

int main(){
    char str[] = "Hello, Pipa";
    printf("%d\n", my_strlen(str));
    return 0;
}