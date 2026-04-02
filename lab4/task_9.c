#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fputs("HelloWorld", fp);
    fseek(fp, 5, SEEK_SET);
    int ch = getc(fp);
    printf("Символ на позиции 5: %c\n", ch);
    fclose(fp);
    return 0;
}