/*
    配列の初期化テスト
    Erika Sakurai
    inittest.c
*/

#include <stdio.h>

int main(){
    int array[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("%d: %d\n",i,array[i]);
    }

    return 0;
}
