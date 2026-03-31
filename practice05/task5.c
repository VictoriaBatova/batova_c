#include <stdio.h>

int main(){
    char str[] = "Hello!, World!";
    char *p = str;
    int count = 0;
    while(*p != '\0'){
        if(*p == '!'){count++;}
        if(count > 3){
            printf("STOP\n");
            break;
        }
        p++;
    }
    return 0;
}