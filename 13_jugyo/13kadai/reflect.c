/*
    Sakurai Erika
    2353702
    reflect.c
    無限跳ね返り
    振動する
*/

#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50


int main (){
    int x = 0; //中心の座標
    int i = 1;

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    while(i == 1){
    
        while(i == 1){
            HgClear();
            HgCircle(x,WINDOWSIZE / 2,RADIUS);
            HgSleep(0.05);
            x += 5; 
            if(x == 400){
                break;
            }    
        }

        while(i == 1){
            HgClear();
            HgCircle(x,WINDOWSIZE / 2, RADIUS);
            HgSleep(0.05);
            x -= 5;
            if(x == 0){
                break;
            }
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
