#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
};

int main() {
    int n;
    struct Student *students;
    int maxAgeIndex = 0;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Студент %d:\n", i + 1);
        printf("Имя: ");
        scanf("%s", students[i].name);
        printf("Возраст: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\nВсе студенты:\n");
    for (int i = 0; i < n; i++) {
        printf("Имя: %s, Возраст: %d\n", students[i].name, students[i].age);
    }
    
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[maxAgeIndex].age) {
            maxAgeIndex = i;
        }
    }
    
    printf("\nСамый старший студент:\n");
    printf("Имя: %s, Возраст: %d\n", students[maxAgeIndex].name, students[maxAgeIndex].age);
    
    free(students);
    
    return 0;
}