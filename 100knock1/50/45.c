#include <stdio.h>

int main(){
    int inNum;
    int total = 0;
    int ratio = 0;

    printf("距離 ");
    scanf("%d",&inNum);

    if(inNum < 1700){
        total = 610;
    }else{
        ratio = (inNum - 1700 + 312) / 313;
        //1mでも進んでしまったら80円かかるので312を足してratioの値を増やす
        total = 610 + ratio * 80;
    }

    printf("%d円である\n",total);

    return 0;
}
