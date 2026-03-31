#include <stdio.h>

int main(){
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *p = str;
    while(*p != '\0'){
        if((*p == 'A') || (*p == 'E') || (*p == 'I') || (*p == 'O') || (*p == 'U') || (*p == 'Y') || (*p == 'a') || (*p == 'e') || (*p == 'i') || (*p == 'o') || (*p == 'u') || (*p == 'y')){
        printf("*");
        }
        else{printf("%c", *p);}
        p++;
    }
    printf("\n");
    return 0;
}