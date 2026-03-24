#include <stdio.h>

int main(){
    int *p = NULL;
    if(p == NULL){
        printf("Указатель\n");
    }
    else{printf("Не указатель\n");}
    
    return 0;
}