#include <stdio.h>

int main(){
    char str[] = "HelloWorld";
    char *start = str;
    char *end = str;

    while(*end){end++;}

    int lenght = end - start;
    int half = lenght / 2;

    char *ptr = start;
    for(int i = 0; i < half; i++){
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    for(int i = half; i < lenght; i++){
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}