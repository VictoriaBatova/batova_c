#include <stdio.h>
#include <stddef.h>

int main() {
    int a, b, c;
    
    printf("Адрес переменной a: %p\n", &a);
    printf("Адрес переменной b: %p\n", &b);
    printf("Адрес переменной c: %p\n", &c);
    
    ptrdiff_t diff_ab = &a - &b;
    ptrdiff_t diff_ac = &a - &c;
    ptrdiff_t diff_bc = &b - &c;
    
    printf("Разница между адресами a и b: %td\n", diff_ab);
    printf("Разница между адресами a и c: %td\n", diff_ac);
    printf("Разница между адресами b и c: %td\n", diff_bc);
    
    return 0;
}

// Переменные размещаются в памяти последовательно в порядке объявления. 
// Каждая переменная int занимает 4 байта. Разница между адресами показывает, сколько объектов типа int помещается между ними