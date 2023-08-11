/*
Sakurai Erika
2353702
checkArea.c
長方形と縁をかいて赤と青
*/

#include <stdio.h>
#include <handy.h>

int main(){

    int x;
    int y;
    int r = 50;

    printf("x:");
    scanf("%d",&x);

    printf("y:");
    scanf("%d",&y);

    HgOpen(600,400);

    HgBox(150,100,300,200);

    if((x <= 150 || 450 <= x) || (y <= 100 || 300 <= y)){
        HgSetFillColor(HG_BLUE);
        HgCircleFill(x,y,r,1);
    }else{
        HgSetFillColor(HG_RED);
        HgCircleFill(x,y,r,1);
    }

    HgGetChar();
    HgClose();

    return 0;

}
