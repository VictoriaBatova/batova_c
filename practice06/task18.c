#include <stdio.h>

int count_char(char str[], char c){
    int count = 0;
    char *p = str;
    while(*p){
        if(*p == c){
            count++;
        }
        p++;
    }
    return count;
}

int main(){
    char str[] = "Hello, Pipa";
    char c;
    scanf("%c", &c);
    printf("%d\n", count_char(str, c));
    return 0;
}