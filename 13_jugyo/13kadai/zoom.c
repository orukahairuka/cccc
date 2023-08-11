/*
zoom.c
Sakurai Erika 
2353702
円を拡大させる
*/
#include <stdio.h>
    #include <handy.h>

    #define X 200
    #define Y 200



int main(){
    
    int r;
    int i;

    HgOpen(400,400);
    for(r = 0;r< 300;r++){//移動する速度は１
        HgClear();//ウィンドウを消去する
        HgCircle(X,Y,r);
        HgSleep(0.05);//0.05間実行を止める
    }
    HgGetChar();
    HgClose();
    return 0;

}
