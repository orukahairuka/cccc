/*
    ontOfBounds.c
    SAkurai Erika
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int array[10];
    int max;//アクセスする要素番号の最大値
    int i;//カウント変数

    printf("input max number: ");
    scanf("%d",&max);

    for (i = 0; i < max;i++){
        array[i] = i;
        printf("%d\n", array[i]);
    }
    //arrayが10までと宣言しているにも関わらずmax
    //で代入した値より多くなってしまうが実行できる

    exit(0);
}
