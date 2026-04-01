#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Person{
    char name[100];
    struct Date birthDate;
};

int main(){
    struct Person person;
    printf("Введите имя: ");
    scanf("%s", person.name);

    printf("Введите дату рождения (день месяц год): ");
    scanf("%d %d %d", &person.birthDate.day, &person.birthDate.month, &person.birthDate.year);

    printf("\nДанные человека:\n");
    printf("Имя: %s\n", person.name);
    printf("День рождения: %d.%d.%d\n", person.birthDate.day, person.birthDate.month, person.birthDate.year);

    if (person.birthDate.year > 2000) {
        printf("\nЭтот человек родился после 2000\n");
    } else {
        printf("\nЭтот человек родился в 2000 или раньше\n");
    }
    
    return 0;
}