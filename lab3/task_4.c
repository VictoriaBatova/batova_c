#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *arr;
    
    printf("Введите начальный размер массива: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    printf("Введите %d элементов:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Введите новый размер массива: ");
    scanf("%d", &m);
    
    int *tmp = (int*)realloc(arr, m * sizeof(int));
    
    if (tmp == NULL) {
        printf("Ошибка перевыделения памяти!\n");
        free(arr);
        return 1;
    }
    
    arr = tmp;
    
    if (m > n) {
        printf("Введите %d новых элементов:\n", m - n);
        for (int i = n; i < m; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    printf("Обновленный массив: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}