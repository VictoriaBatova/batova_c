#include <stdio.h>

struct Student{
    char name[100];
    int age;
    float grade;
};

int main(){
    struct Student student[5];
    int i;
    int maxIndex = 0;

    for(i = 0; i < 5; i++){
        scanf("%s", student[i].name);
        scanf("%d", &student[i].age);
        scanf("%f", &student[i].grade);
    }

    for(i = 0; i < 5; i++){
        printf("Имя: %s\n", student[i].name);
        printf("Возраст: %d\n", student[i].age);
        printf("Средний балл: %.1f\n", student[i].grade);
    }

    for (i = 1; i < 5; i++){
        if(student[i].grade > student[maxIndex].grade){
            maxIndex = i;
        }
    }
    printf("Студент с максимальным средним баллом\n");
    printf("Имя: %s\n", student[maxIndex].name);
    printf("Возраст: %d\n", student[maxIndex].age);
    printf("Средний балл: %.1f\n", student[maxIndex].grade);

    return 0;
}