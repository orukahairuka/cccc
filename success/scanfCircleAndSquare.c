#include <stdio.h>
#include <handy.h>

int main(){

    int X;
    int Y;
    int R;
    int square_x;
    int square_y;
    int square_w;
    int square_h;

    

    printf("input X\n");//x座標を入れる
    scanf("%d",&X);

    printf("input Y\n");//y座標を入れる
    scanf("%d",&Y);

    printf("input R\n");//r半径を入れる
    scanf("%d",&R);
    
   


    square_x = X - R ;
    square_y = Y - R ;
    square_w = 2*R;
    square_h = 2*R;

    printf("正方形の左下座標は(%d,%d)\n",square_x,square_y);

    HgOpen(400,400);
    
    HgCircle(X,Y,R);
    HgBox(square_x,square_y,square_w,square_h);
    



    HgGetChar();
    HgClose();

    return 0;
}
