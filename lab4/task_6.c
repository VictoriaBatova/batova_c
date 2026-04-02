#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    FILE *fp = fopen("numbers.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fwrite(arr, sizeof(int), size, fp);
    fclose(fp);

    int new_arr[5];
    fp = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    fread(new_arr, sizeof(int), size, fp);
    fclose(fp);

    printf("Массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");
    return 0;
}