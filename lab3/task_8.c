#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf("\n--- Меню ---\n");
    printf("1. Добавить элемент\n");
    printf("2. Удалить элемент\n");
    printf("3. Вывести список\n");
    printf("4. Изменить размер массива\n");
    printf("0. Выход\n");
    printf("Выберите действие: ");
}

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;
    
    do {
        printMenu();
        scanf("%d", &choice);
        
        if (choice == 1) {
            int value;
            printf("Введите значение: ");
            scanf("%d", &value);
            
            size++;
            int *tmp = (int*)realloc(arr, size * sizeof(int));
            
            if (tmp == NULL) {
                printf("Ошибка выделения памяти!\n");
                if (arr != NULL) free(arr);
                return 1;
            }
            
            arr = tmp;
            arr[size - 1] = value;
            printf("Элемент добавлен!\n");
        }
        else if (choice == 2) {
            if (size == 0) {
                printf("Список пуст!\n");
                continue;
            }
            
            int index;
            printf("Введите индекс для удаления (0-%d): ", size - 1);
            scanf("%d", &index);
            
            if (index < 0 || index >= size) {
                printf("Неверный индекс!\n");
                continue;
            }
            
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            
            size--;
            int *tmp = (int*)realloc(arr, size * sizeof(int));
            
            if (tmp == NULL && size > 0) {
                printf("Ошибка перевыделения памяти!\n");
                free(arr);
                return 1;
            }
            
            arr = tmp;
            printf("Элемент удален!\n");
        }
        else if (choice == 3) {
            if (size == 0) {
                printf("Список пуст!\n");
            } else {
                printf("Список: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        }
        else if (choice == 4) {
            int newSize;
            printf("Введите новый размер: ");
            scanf("%d", &newSize);
            
            if (newSize < 0) {
                printf("Неверный размер!\n");
                continue;
            }
            
            int *tmp = (int*)realloc(arr, newSize * sizeof(int));
            
            if (tmp == NULL && newSize > 0) {
                printf("Ошибка перевыделения памяти!\n");
                free(arr);
                return 1;
            }
            
            arr = tmp;
            
            if (newSize > size) {
                printf("Введите %d новых элементов:\n", newSize - size);
                for (int i = size; i < newSize; i++) {
                    scanf("%d", &arr[i]);
                }
            }
            
            size = newSize;
            printf("Размер изменен!\n");
        }
        else if (choice != 0) {
            printf("Неверный выбор!\n");
        }
        
    } while (choice != 0);
    
    free(arr);
    printf("Программа завершена.\n");
    
    return 0;
}