
/*
plot.c
Sakurai Erika
2353702
大きさ600 x 400のウィンドウに
、左下を原点(0,0)として、
y = x / 2 + 30 となる直線上の点を
、x座標が0から10刻みで
600まで描くプログラムplot.cを作成せよ
。点は、半径1の円として描けばよい（塗りつぶさなくてよい）
*/
#include <stdio.h>
#include <handy.h>

int main(){

    int x = 0;//円のx座標
    int y = 30;//円のy座標

    HgOpen(600,400);
    while(1){
        y = (x / 2) + 30;
        HgCircle(x,y,1);
        x += 10;
        if(x == 600){
            break;
        }
    }
    HgGetChar();
    HgClose();

    return 0;
    

    
    

    
}
