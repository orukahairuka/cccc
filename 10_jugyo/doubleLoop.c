/*
    doubleLoop.c
    繰り返しの入れ子の例
    Sakurai Erika
*/

#include <stdio.h>

int main(){

    int inner, outer; //カウンタ変数

    for(outer = 0; outer < 3; outer++){
        printf("before innner loop\n");
        for (inner = 0; inner < 3; inner++){
            printf("outer = %d, inner = %d\n",outer,inner);
        }
        printf("after inner loop\n");

    }
    return 0;

}
