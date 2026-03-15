#include <stdio.h>

int main() {
    int a = 10;

    printf("Начальное значение: %d\n", a);
    a = 10;
    printf("Постфиксный инкремент x++: %d\n", a++);
    a = 10;
    printf("Префиксный инкремент ++x: %d\n", ++a);
    a = 10;
    printf("Постфиксный декремент x--: %d\n", a--);
    a = 10;
    printf("Префиксный инкремент --x: %d\n", --a);

    return 0;
}