/*
23knock.c
整数値を入力させ、
その値が-5以上10未満であればOK、
そうでなければNGと表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(){

    int num1;//入力値

    printf("input number:");
    scanf("%d",&num1);

    if(-5 <= num1 && num1 < 10){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
}
