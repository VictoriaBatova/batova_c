#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matrix[i][j] = 1;
            }else{
                matrix[i][j] = 0;
            }
        }
    }
    printf()
    return 0;
}