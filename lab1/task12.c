#include <stdio.h>

int main() {
    int number;
    
    printf("Введите трёхзначное число: ");
    scanf("%d", &number);
    
    if (number < 100 || number > 999) {
        printf("Ошибка: число должно быть трёхзначным!\n");
        return 1;
    }
    
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;
    
    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", units);
    
    return 0;
}