#include <stdio.h>

void to_upper(char str[]){
    char *p = str;
    while(*p){
        if(*p != ' '){
        *p = *p - 32;
        }
        printf("%c", *p);
        p++;
    }
    printf("\n");
}

int main(){
    char str[] = "meow gaf kva";
    to_upper(str);
    return 0;
}