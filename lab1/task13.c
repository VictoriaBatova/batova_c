#include <stdio.h>

int main() {
    int N;
    int hours, minutes, seconds;

    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &N);

    hours = N / 3600;
    minutes = (N % 3600) / 60;
    seconds = N % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
