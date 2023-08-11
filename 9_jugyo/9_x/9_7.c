#include <stdio.h>

int main(void){

    int count;//カウンタ変数
    int repeatNum;//繰り返し回数

    printf("繰り返し回数を入力して下さい：");
    scanf("%d",&repeatNum);
    for (count = 0; count < repeatNum; count++){
        printf("hello\n");
    }

    return 0;
}
