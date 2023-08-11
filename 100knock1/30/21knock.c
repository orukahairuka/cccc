/*
21knock.c
整数値を入力させ、その値が5よりも大きく、
かつ、20よりも小さければOKと表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(){
    int num1 = 0;

    printf("input number:");
    scanf("%d",&num1);

    if(5 < num1 && num1 < 20){
        printf("OK\n");
    }

    return 0;

}
