#include <stdio.h>

int main (){
    int n, count;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int t = i;
        count = 0;
        while(t > 0){
            if(t % 10 == 3){
                count += 1;
                break;
            }
            t /= 10;
        }
        if(count == 0){printf("%d\n", i);}
    }
    return 0;
}