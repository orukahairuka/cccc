/*
Sakurai Erika
2353702
bound.c
中心がウィンドウの端に当たると跳ね返る
*/

#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50


int main (){
    int x = 0; //中心の座標
    int y = 0;
    int dy = 3;//y軸方向の移動
    int dx = 5;//x軸方向の移動

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    while(1){       
        HgClear();
        HgCircle(x,y,RADIUS);
        HgSleep(0.05);           
        x += dx;
        y += dy; 
        if(y > WINDOWSIZE ){
            dy = -dy;
        }
        if(x > WINDOWSIZE){
            dx = -dx;
        }
        if(x < 0){
            dx = -dx;
        }
        if(y < 0){
            dy = -dy;
        }
        
    }

    HgGetChar();
    HgClose();
    return 0;
}
