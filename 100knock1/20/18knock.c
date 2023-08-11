/*18knock.c
要素数10の整数型の配列を宣言し、
整数値を入力させ、
すべての配列の要素を入力値として、
すべての要素の値を表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(){
    int i = 0;
    int num2 = 0;
    int num1[10];

    printf("input number:");
    scanf("%d",&num2);

    for(i = 0;i < 10;i++){
        num1[i] = num2;
    }

    for(i = 0; i < 10 ; i++){
        printf("%d\n",num1[i]);
    }

    return 0;


}
