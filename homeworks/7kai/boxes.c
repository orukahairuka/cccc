/*****
 * x0<x1かつy0<y1とする
 * Sakurai Erika 2353702
 * 
*/




#include <stdio.h>
#include <handy.h>

int main(){
    
    int x0;
    int y0;
    int x1;
    int y1;
    int width;
    int height;
    int xa;
    int ya;
    int xb;
    int yb;
    int xc;
    int yc;
    int xd;
    int yd;
    int centerX;
    int centerY;
    int X;
    int Y;


    printf("x0を入力する\n");
    scanf("%d",&x0);
    
    printf("y0を入力する\n");
    scanf("%d",&y0);

    printf("x1を入力する\n");
    scanf("%d",&x1);

    printf("y1を入力する\n");
    scanf("%d",&y1);

    width = x1 - x0;
    height = y1 - y0;
    
    HgOpen(600,600);

    HgBox(x0,y0,width,height);

    centerX = x0 + width / 2;
    centerY = y0 + height / 2;
    xa = centerX;
    ya = centerY + height;

    xb = centerX - width;
    yb = centerY;

    xc = centerX;
    yc = centerY - height;

    xd = centerX + width;
    yd = centerY;



    HgLine(xa,ya,xb,yb);
    HgLine(xa,ya,xd,yd);
    HgLine(xc,yc,xd,yd);
    HgLine(xb,yb,xc,yc);

    X = centerX - width;
    Y = centerY - height;

    HgBox(X,Y,2*width,2*height);



    HgGetChar();
    HgClose();


    return 0;
    





}
