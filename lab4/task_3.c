#include <stdio.h>

int main() {
    FILE *fp = fopen("strings.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fputs("Первая строка\n", fp);
    fputs("Вторая строка\n", fp);
    fputs("Третья строка\n", fp);
    fclose(fp);

    fp = fopen("strings.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    char buffer[200];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}