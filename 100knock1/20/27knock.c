/*
27knock.c
整数値を入力させ、
1からその値までの総和を計算して表示するプログラムを作成せよ。
ただし、0以下の値を入力した場合は0と表示する。
*/

#include <stdio.h>

int main(){

    int num1 = 0;//入力値
    int i;//繰り返す数
    int sum = 0;

    printf("input number:");
    scanf("%d",&num1);

    for(i = 1; i <= num1; i++){
        sum += i;
    }
    printf("sum = %d\n",sum);

    return 0;

}
