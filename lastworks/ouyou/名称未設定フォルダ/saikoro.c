/*****
    random.c
    乱数を10個発生させてみる
    M.Minakuchi
*****/
#include <stdio.h>
#include <stdlib.h>  // rand関数を使うために必要

int main() {
    int i;
    int random;
    int result[10] ;
    int result2[10] ;
    int total = 0;

    for (i = 0; i < 10; i++) {
        random = rand();  // 乱数を得る
        result[i] = random % 20;
        result2[i] = random % 20;
        result2[i]++;
        result[i] ++;
        total = result[i] + result2[i];
        printf("サイコロの目の合計は%d\n",total);
    }

    return 0;
}
