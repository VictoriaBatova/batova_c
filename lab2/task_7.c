#include <stdio.h>

enum Course {FIRST, SECOND, THIRD, FOURTH};

struct Student{
    char name[100];
    int age;
    enum Course course;
    float grade;
};

void addStudent(struct Student *students, int *count){
    printf("Введите имя: ");
    scanf("%s", students[*count].name);
    printf("Введите возраст: ");
    scanf("%d", &students[*count].age);
    printf("Введите курс (0-ПЕРВЫЙ, 1-ВТОРОЙ, 2-ТРЕТИЙ, 3-ЧЕТВЕРТЫЙ): ");
    int courseNum;
    scanf("%d", &courseNum);
    students[*count].course = (enum Course)courseNum;
    printf("Введите средний балл: ");
    scanf("%f", &students[*count].grade);
    (*count)++;
}

void printStudents(struct Student *students, int count){
    for (int i = 0; i < count; i++) {
        printf("\nСтудент %d:\n", i + 1);
        printf("Имя: %s\n", students[i].name);
        printf("Возраст: %d\n", students[i].age);
        printf("Курс: %d\n", students[i].course);
        printf("Средний балл %.1f\n", students[i].grade);
    }
}

int compareNames(char *name1, char *name2){
    int i = 0;
    while (name1[i] != '\0' && name2[i] != '\0') {
        if (name1[i] != name2[i]) {
            return 0;
        }
        i++;
    }
    return (name1[i] == '\0' && name2[i] == '\0');
}

void searchByName(struct Student *students, int count, char *name){
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (compareNames(students[i].name, name)) {
            printf("\nСтудент найден:\n");
            printf("Имя: %s\n", students[i].name);
            printf("Возраст: %d\n", students[i].age);
            printf("Курс: %d\n", students[i].course);
            printf("Средний балл: %.1f\n", students[i].grade);
            found = 1;
        }
    }
    if (!found) {
        printf("Студент не найден\n");
    }
}

void sortByGrade(struct Student *students, int count){
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].grade < students[j].grade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main(){
    struct Student students[100];
    int count = 0;
    int choice;
    char searchName[100];
    
    do{
        printf("\n1. Добавить студента\n");
        printf("2. Вывести всех студентов\n");
        printf("3. Поиск по имени\n");
        printf("4. Сортировка по баллу\n");
        printf("5. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                printStudents(students, count);
                break;
            case 3:
                printf("Введите имя для поиска: ");
                scanf("%s", searchName);
                searchByName(students, count, searchName);
                break;
            case 4:
                sortByGrade(students, count);
                printf("Отсортировано по баллу\n");
                printStudents(students, count);
                break;
        }
    } while (choice != 5);
    
    return 0;
}