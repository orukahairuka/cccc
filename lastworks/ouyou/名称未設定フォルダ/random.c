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

    for (i = 0; i < 10; i++) {
        random = rand();  // 乱数を得る
        printf("%d\n", random);  // 乱数を表示する
    }

    return 0;
}
