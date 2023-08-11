/*
整数値を入力させ、その値が-10以下、
または、10以上であればOKと表示するプログラムを作成せよ
*/

#include <stdio.h>

int main(){

    int num1 = 0;

    printf("input number:");
    scanf("%d",&num1);

    if(-10  >= num1 || 10 <= num1){
        printf("OK\n");
    }

    return 0;
}
