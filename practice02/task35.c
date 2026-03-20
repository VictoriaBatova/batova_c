#include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            int res = i * j;
            if(res > 30){continue;}
            printf("%d x %d = %d\n", i, j, res);
        }
        printf("\n");
    }
    return 0;
}