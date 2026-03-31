#include <stdio.h>

int main(){
    char str[] = "I love C";
    char *p = str;
    char *left, *right, *p, *word_start, *word_end;
    char temp;

    left = str;
    right = str;
    while(*right){right++}
    right--;

    while(left < right){
        temp = *left;
        *left = *right;
        *right = temp;
    }
    printf("\n");
    return 0;
}