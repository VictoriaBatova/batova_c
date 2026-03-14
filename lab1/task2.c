#include <stdio.h>

int main() {
    printf("char: %zu int: %zu float: %zu double: %zu\n", 
           sizeof(char), sizeof(int), sizeof(float), sizeof(double));
    return 0;
}