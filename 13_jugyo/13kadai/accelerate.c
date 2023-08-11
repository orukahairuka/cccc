/*
Sakurai Erika
2353702
accelerate.c
*/

#include <stdio.h>
#include <handy.h>
#define X 200//x座標

int main(){

    int v = 1;//加速度
    int m;//一秒間に進む距離
    int s = 0;//落ちる秒数
    int y = 400;//y座標
    int a;//加速度

    HgOpen(400,400);

    for(s = 0; s <= 250;s++){
        HgClear();
        HgCircle(X,y,50);
        HgSleep(0.05);
        a = 2.0 / s * s;
        y =400 -((1.0 / 2) * a * s * s);//y=(-1/2)*a*t*tより
        
    }
 
    
    HgGetChar();
    HgClose();
    return 0;
}
