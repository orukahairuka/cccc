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

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    while(1){
        if(0 <= x && x <= 400 && 0 <= y && y <= 400){
            while(1){
                HgClear();
                HgCircle(x,y,RADIUS);
                HgSleep(0.05);           
                x += 5;
                y += 3;
                if( x == 400 || y == 400 || x == -400 || y == -400){
                    break;
                }           
            }
        }else if(-400 <= x && x < 0 && 0 <= y && y <= 400){
            while(1){
                HgClear();
                HgCircle(x,y, RADIUS);
                HgSleep(0.05);
                x -= 5;
                y += 3;  
                if( x == 400 || y == 400 || x == -400 || y == -400){
                    break;         
                }
            }
        }else if(-400 <= x && x < 0 && -400 <= y && y < 0){
            while(1){
                HgClear();
                HgCircle(x,y, RADIUS);
                HgSleep(0.05);
                x += 5;
                y -= 3; 
                if( x == 400 || y == 400 || x == -400 || y == -400){
                    break;         
                }
            }
        }else if(0 <= x && x <= 400 && -400 <= y&& y < 0){
            while(1){
                HgClear();
                HgCircle(x,y, RADIUS);
                HgSleep(0.05);
                x -= 5;
                y -= 3;
                if( x == 400 || y == 400 || x == -400 || y == -400){
                    break;          
                }
            }
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
