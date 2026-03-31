#include <stdio.h>

int main(){
    char str[] = "aaabbc";
    char *ptr = str;
    char new_str[sizeof(str)/sizeof(str[0])];
    char *ptr2 = new_str;
    while(*ptr){
        char current = *ptr;

        while (*ptr == current) {
            ptr++;
        }
        *ptr2 = current;
        ptr2++;
    }
    
    *ptr2 = '\0';
    
    printf("%s\n", new_str);
    return 0;
}