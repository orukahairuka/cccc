#include <stdio.h>
#include <handy.h>

int main(){
    int X = 200;
    int Y = 200;
    int R = 150;
    int x;
    int y;
    int r;
    int disx;
    int disy;
    
    printf("円2の半径を入力して下さい。\n");
    scanf("%d",&r);

    printf("円2のx座標を入れて下さい。\n");
    scanf("%d",&x);

    printf("円2のy座標を入れて下さい。\n");
    scanf("%d",&y);

    disx = X - x;
    disy = Y - y;

    HgOpen(400,400);

    HgCircle(X,Y,R);

    if(disx * disx + disy * disy < R * R + r * r){
        //赤色に塗りつぶすhandy

       HgSetFillColor(HG_RED);
       HgCircleFill(x,y,r,1);
       


    }else{
        //青色に塗りつぶすhandy


        HgSetFillColor(HG_BLUE);
        HgCircleFill(x,y,r,1);
        

    }
    HgGetChar();
    HgClose();
    return 0;

}
