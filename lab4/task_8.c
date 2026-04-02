#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person people[3] = {
        {"Alice", 20},
        {"Bob", 22},
        {"Charlie", 23}
    };

    FILE *fp = fopen("people.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fwrite(people, sizeof(struct Person), 3, fp);
    fclose(fp);

    struct Person new_people[3];
    fp = fopen("people.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fread(new_people, sizeof(struct Person), 3, fp);
    fclose(fp);

    for (int i = 0; i < 3; i++) {
        printf("Имя: %s, Возраст: %d\n", new_people[i].name, new_people[i].age);
    }
    return 0;
}