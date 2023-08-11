/*
    Sakurai Erika
    2353702
    scanfCircle.c

*/


#include <stdio.h>
#include <handy.h>

int main(){

    int X;
    int Y;
    int R;

    printf("input X\n");//x座標を入れる
    scanf("%d",&X);

    printf("input Y\n");//y座標を入れる
    scanf("%d",&Y);

    printf("input R\n");//r半径を入れる
    scanf("%d",&R);

    HgOpen(400,400);
    
    HgCircle(X,Y,R);
    
    HgGetChar();
    HgClose();

    return 0;
}
