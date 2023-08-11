/*
Sakurai Erika 
2353702
oddSquare.c
1以上100未満の奇数の2条を表示するプログラム

*/

#include <stdio.h>

int main(){

    int i = 1;
    int number = 0;
    int x = 0;


    

    for(i = 1;51 > i;i++){
        
        x = 2 * i - 1;
        number = x * x;
        printf("%d\n",number);
    }

    return 0;
}
