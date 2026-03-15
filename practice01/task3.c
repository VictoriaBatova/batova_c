#include <stdio.h>

int main(){
    printf("размер (int): %zu байт\n", sizeof(int));
    printf("размер (float): %zu байт\n", sizeof(float));
    printf("размер (double): %zu байт\n", sizeof(double));
    printf("размер (char): %zu байт\n", sizeof(char));
    
    return 0;
}