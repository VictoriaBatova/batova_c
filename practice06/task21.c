#include <stdio.h>

int is_palindrome_str(char str[]){
    char *p = str;
    char *start = str;
    char *end = str;
    while(*end){
        end++;
    }
    end--;
    while(start < end){
        if(*start != *end){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main(){
    char str[] = "poiop";
    printf("%d\n", is_palindrome_str(str));
    return 0;
}