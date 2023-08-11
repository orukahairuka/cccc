/*整数値を入力させ
、その個数だけ*を、
5個おきに空白（スペース）を入れて表示するプログラム
を作成せよ。入力値が0以下の値の場合は何も書かなくてよい。*/

#include <stdio.h>

int main() {
    int num1;
    int i;
    int ad;

    printf("input number:");
    scanf("%d", &num1);

    for(i = 1; i <= num1; i++){
        printf("*");
        ad = i % 5;
        if(ad == 0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
