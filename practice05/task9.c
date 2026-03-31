#include <stdio.h>

int main(){
    char str[] = "hello world";
    char *p = str;
    int count = 0;
    while(*p){
        if(*p == *(p + 1)){
            count++;
        }
        p++;
    }
    if(count){printf("Да\n");}
    else{printf("Нет\n");}
    return 0;
}