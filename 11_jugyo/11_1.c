#include <stdio.h>

int main(){

    int array[5];
    int i;

    i = 2;
    array[i] = 4; //変数で要素番号を指定できる
    array[i + 2] = 5;  //計算式でもいい
    printf("%D\n",array[array[i]]);

    return 0;
}
