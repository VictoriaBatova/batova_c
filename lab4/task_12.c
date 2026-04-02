#include <stdio.h>
#include <string.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person person;
    FILE *fp;

    printf("Введите имя: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0';

    printf("Введите возраст: ");
    scanf("%d", &person.age);
    getchar();

    fp = fopen("database.bin", "ab");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fwrite(&person, sizeof(struct Person), 1, fp);
    fclose(fp);

    fp = fopen("database.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    printf("\nБаза данных:\n");
    struct Person temp;
    while (fread(&temp, sizeof(struct Person), 1, fp) == 1) {
        printf("Имя: %s, Возраст: %d\n", temp.name, temp.age);
    }
    fclose(fp);
    return 0;
}