/*
    Sakurai Erika
    2353702
    reflect2.c
*/

#include<stdio.h>
#include<handy.h>

#define WINDOWSIZE 400
#define RADIUS 50

int main(){

    int x;
    int v;

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    v = 5;
    for(x = 0; x >= 0; x += v){
        HgClear();
        HgCircle(x,WINDOWSIZE / 2, RADIUS);
        HgSleep(0.05);
        if( x>= WINDOWSIZE){
            v = -5;
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
