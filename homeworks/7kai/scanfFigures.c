/***
 * 
 * ばってん図形の表示
 * 2353702 Saurai Erika
*/


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
    int line1_x0;
    int line1_x1;
    int line1_y0;
    int line1_y1;
    int line2_x0;
    int line2_x1;
    int line2_y0;
    int line2_y1;

    

    printf("input X\n");//x座標を入れる
    scanf("%d",&X);

    printf("input Y\n");//y座標を入れる
    scanf("%d",&Y);

    printf("input R\n");//r半径を入れる
    scanf("%d",&R);
    
    


    square_x = X - R;
    square_y = Y - R;
    square_w = 2 * R;
    square_h = 2 * R;
    line1_x0 = square_x;
    line1_y0 = square_y;
    line1_x1 = square_x + square_w;
    line1_y1 = line1_y0 + square_h;
    line2_x0 = square_x;
    line2_y0 = square_y + square_h;
    line2_x1 = square_x + square_w;
    line2_y1 = square_y;


 printf("正方形の左下座標は(%d,%d)\n",square_x,square_y);

   
    


    HgOpen(400,400);
    
    HgCircle(X,Y,R);
    HgBox(square_x,square_y,square_w,square_h);
    HgLine(line1_x0,line1_y0,line1_x1,line1_y1);
    HgLine(line2_x0,line2_y0,line2_x1,line2_y1);



    HgGetChar();
    HgClose();

    return 0;
}
