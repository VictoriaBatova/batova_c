#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    int ch;
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }
    if (feof(fp)) {
        printf("\nКонец файла\n");
    }
    if (ferror(fp)) {
        printf("Ошибка чтения\n");
    }
    fclose(fp);
    return 0;
}