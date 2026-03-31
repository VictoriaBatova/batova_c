#include <stdio.h>

int count_vowels(char str[]){
    char *p = str;
    int count = 0;
    while(*p){
        if( (*p == 'A') || (*p == 'E') || (*p == 'U') || (*p == 'O') || (*p == 'Y') || (*p == 'I') ||(*p == 'a') || (*p == 'e') || (*p == 'u') || (*p == 'o') || (*p == 'y') || (*p == 'i')){
        count++;
        }
        p++;
    }
    return count;
}

int main(){
    char str[] = {"Hello, ogyrec"};
    char *p = str;
    printf("%d\n", count_vowels(str));
    return 0;
}