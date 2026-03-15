#include <stdio.h>

int main() {
    float a, b, res;
    char c;
    printf("Введите 2 числа и операцию над ними...\n");
    scanf("%f %f %c", &a, &b, &c);

   switch(c){
    case '+':
    res = a + b;
    break;

    case '-':
    res = a - b;
    break;

    case '*':
    res = a * b;
    break;

    case '/':
    res = a / b;
    break;
   }

   printf("%.2f %c %.2f = %.2f\n", a, c, b, res);
    return 0;
}