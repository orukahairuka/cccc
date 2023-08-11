/*
    Sakurai Erika
    2353702
    reflect.c
*/

#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50


int main (){
    int x; //中心の座標
    

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    //右向きの移動
    for(x = 0; x < WINDOWSIZE; x += 5){
        HgClear();
        HgCircle(x,WINDOWSIZE / 2,RADIUS);
        HgSleep(0.05);
    }

    //左向きに移動
    for(x = WINDOWSIZE; x >= 0; x -= 5){
        HgClear();
        HgCircle(x,WINDOWSIZE / 2,RADIUS);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
