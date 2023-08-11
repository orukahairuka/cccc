/*
    Sakurai Erika
    2353702
    move.c
*/

#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400   //;をつけないこと
#define RADIUS 50

int main(){
    int x; //中心の座標

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    for (x = 0; x < WINDOWSIZE; x++){
        HgClear();
        HgCircle(x,WINDOWSIZE / 2,RADIUS);
    }

    HgGetChar();
    HgClose();
    return 0;
}
