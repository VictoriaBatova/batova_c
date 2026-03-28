#include <stdio.h>

int main() {
    int number;
    
    printf("Введите целое число:");
    scanf("%d", &number);

    int lastDigit = number % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }
    
    printf("%d\n", lastDigit);
    
    return 0;
}