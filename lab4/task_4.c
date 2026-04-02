#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fprintf(fp, "%s %d %.2f\n", "Alice", 25, 89.5);
    fprintf(fp, "%s %d %.2f\n", "Bob", 30, 92.3);
    fclose(fp);

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    char name[50];
    int age;
    float score;
    while (fscanf(fp, "%s %d %f", name, &age, &score) == 3) {
        printf("Имя: %s, Возраст: %d, Оценка: %.2f\n", name, age, score);
    }
    fclose(fp);
    return 0;
}