#include <stdio.h>

int intersection(int a[], int sizeA, int b[], int sizeB, int result[]){
    int k = 0;

    for (int i = 0; i < sizeA; i++){
        for (int j = 0; j < sizeB; j++){
            if(a[i] == b[j]){
                result[k++] = a[i];
                break;
            }

        }
    }
    return k;
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int result[5];

    int size = intersection(a, 5, b, 5, result);

    for(int i = 0; i < size; i++){
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}