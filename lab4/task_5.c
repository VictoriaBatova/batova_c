#include <stdio.h>

int main() {
    char str[200];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fputs(str, fp);
    fclose(fp);

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}