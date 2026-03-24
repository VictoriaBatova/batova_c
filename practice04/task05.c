#include <stdio.h>

int main(){
    int a, b;
    int *s = &b;
    int *p = &a;
    if(s == p){
        printf("Равны\n");
    }
    else{}printf("Неравны\n");
    
    return 0;
}