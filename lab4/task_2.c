#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    putc('A', fp);
    putc('B', fp);
    putc('C', fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    int ch;
    printf("Содержимое: ");
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}