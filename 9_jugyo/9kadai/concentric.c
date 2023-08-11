/*concentric.c
Sakurai Erika
大きさ600 x 600のウィンドウに、中心座標が(300, 300)、
半径が50, 100, 150, 200, 250の同心円を5つ
、繰り返しを使って描くプログラムconcentric.cを作成せよ。
2353702*/

#include <stdio.h>
#include <handy.h>

int main(){

    int r = 50;//半径
    int x = 300;//円のx座標
    int y = 300;//円のy座標
    int i;

    HgOpen(600,600);
    for(i = 0; i < 5;i++){
        HgCircle(x,y,r);
        r += 50;
    }
    HgGetChar();
    HgClose();

    return 0;
}

