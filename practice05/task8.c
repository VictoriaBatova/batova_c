#include <stdio.h>

int main(){
    char str[] = "hello world";
    char *p = str;
    int let = 0;
    int num = 0;
    while(*p){
        if((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')){let++;}
        else if(*p >= '0' && *p <= '9'){num++;}
        p++;
    }
    if(let && num){printf("Пароль принят\n");}
    else{printf("Пароль не принят\n");}
    return 0;
}