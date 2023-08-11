/*九九の計算をする*/

#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;
    int total = 0;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            total = i * j;
            printf("%d\t", total);
        }
        printf("\n");
    }
    return 0;

}
