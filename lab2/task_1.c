#include <stdio.h>

struct Student{
    char name[100];
    int age;
    float grade;
};

int main(){
    struct Student student;
    scanf("%s", student.name);
    scanf("%d", &student.age);
    scanf("%f", &student.grade);

    printf("Имя: %s\n", student.name);
    printf("Возраст: %d\n", student.age);
    printf("Средний: %.1f\n", student.grade);
    
    return 0;
}