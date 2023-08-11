/*
    Sakurai Erika
    2353702
    reverse.c
    5つの整数を入力させ逆順に表示する
    配列を使ったバージョン
*/

#include <stdio.h>

int main(){

    int number[5];
    int i;


    for(i = 0;i < 5; i++){

        printf("input No.%d:",i);
        scanf("%d",&number[i]);
    }
    
    return 0;
}
