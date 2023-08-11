#include <stdio.h>

/*
0〜65535の整数値を入力させ
、入力値を16桁の2進数に変換して表示するプログラムを作成せよ。
*/

int main() {
    int num1;
    int total[15] = {0};
    int i = 0;
    printf("input number:");
    scanf("%d", &num1);

    while (num1 >= 0 && 65535 >= num1){
        total[i] = num1 % 2;
        i++;
        num1 /= 2;//totalではなくnum1を変化させていく！！！！！
        if(num1 == 1){//変化していくnum1が1になったら終了させたい
        total[i] = 1;
            break;
        }
    }
    i = 15;
    printf("%d",total[14]);
    while(i>0){
        i--;
        printf("%d",total[i]);
        
    }
    printf("\n");
    return 0;
}
