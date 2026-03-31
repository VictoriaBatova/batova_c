#include <stdio.h>

int main(){
    char str[] = "aaabbc";
    char *ptr = str;
    char new_str[sizeof(str)/sizeof(str[0])];
    char *ptr2 = new_str;

    while(*ptr){
        char current = *ptr;
        int count = 0;

        while (*ptr == current) {
            count++;
            ptr++;
        }

        *ptr2 = current;
        *(ptr2 + 1) = count + '0';
        ptr2 += 2;
        printf("%c%d", current, count);
    }

    *ptr2 = '\0';
    printf("\n");
    printf("%s\n", new_str);
    return 0;
}