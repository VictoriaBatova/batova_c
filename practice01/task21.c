#include <stdio.h>

int main(){
    char a;
    printf("Введите символ...\n");
    scanf("%c", &a);

    if(a >= '0' && a <= '9'){
        printf("%c -- это число\n", a);
    }

    else if(a >= 'A' && a <= 'z'){
        printf("%c -- это буква\n", a);
    }

    else{
        printf("%c -- это другой символ\n", a);
    }

    return 0;
}