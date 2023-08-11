/*
整数値を入力させ、
その値が-10以上0未満、
または、10以上であればOK
、そうでなければNGと表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(){

    int num1;//入力値
    printf("input number:");
    scanf("%d",&num1);

    if((-10 <= num1 && num1 < 0) || (10 <= num1)){
        printf("OK\n");
    }else{
        printf("NG\n");
    }

    return 0;
}
