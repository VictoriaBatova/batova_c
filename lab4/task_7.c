#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person p1 = {"Ivan", 25};

    FILE *fp = fopen("person.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fwrite(&p1, sizeof(struct Person), 1, fp);
    fclose(fp);

    struct Person p2;
    fp = fopen("person.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fread(&p2, sizeof(struct Person), 1, fp);
    fclose(fp);

    printf("Имя: %s\n", p2.name);
    printf("Возраст: %d\n", p2.age);
    return 0;
}