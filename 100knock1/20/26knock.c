/*
整数値を入力させ、
その値が1ならone、2ならtwo、3ならthree、
それ以外ならothersと表示するプログラムをswicth-case文を使って作成せよ。
*/

#include <stdio.h>

int main(){

    int num1;
    
    printf("input number:");
    scanf("%d",&num1);

    switch (num1)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("other\n");
        break;
    }
    return 0;
}
