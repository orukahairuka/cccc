#include <stdio.h>

int main(){

    int num1 = 0;//一つ目の入力の値
    int num2 = 0;//二つ目の入力の値
    int mult = 0;//掛け算の計算結果
    int divi = 0;//割り算の計算結果


    printf("input 1st value:");
    scanf("%d",&num1);

    printf("input 2nd value:");
    scanf("%d",&num2);

    mult = num1 * num2;
    divi = num1 / num2;

    printf("result;%d\n",mult);
    printf("result:%d\n",divi);

    return 0;

}
