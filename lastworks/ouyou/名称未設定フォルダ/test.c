#include <handy.h>
#include <stdio.h>

int main() {
    int i;
    double h = 100;//長方形1の高さ
    double minW = 100;//長方形2の幅
    double minH = 50;//長方形2の高さ
    double minX = 200;//長方形2のx座標
    double minY = 100;//長方形2のy座標
    HgOpen(600, 400);


        HgBox(0, 0, 600, h);//長方形1
        HgBox(minX, minY, minW, minH);//長方形2
        h += 0.5;
        minH += 1.5;
        minW += 2;
        minX -= 1;
        hgevent *event;  // HandyGraphicのイベントを扱うための変数
    int x, y;  // クリックされた座標

    HgSetEventMask(HG_MOUSE_DOWN);  // マウスクリックのみを検出するように設定

    for (i = 0;i<10;i++) {
        event = HgEvent();  // マウスクリックを待つ。クリックされた情報はeventに格納される。
        x = event->x;  // クリックされたx座標を取り出す
        y = event->y;  // クリックされたy座標を取り出す
        printf("clicked (%d, %d)\n", x, y);
        HgCircle(x, y, 20);  // クリックされた位置に半径20の円を描く
    }
    
    int r = HgAlert("%s が現れました!",
"戦う", "逃げる", "ググる",
"なんか良くわからないモンスター"); printf("%d\n", r);


    
    HgWOpen(400,600,600,100);
    HgSetEventMask(HG_MOUSE_MOVE);
    for (;;) {
        event = HgEvent();  // マウスクリックを待つ。クリックされた情報はeventに格納される。
        x = event->x;  // クリックされたx座標を取り出す
        y = event->y;  // クリックされたy座標を取り出す
        printf("clicked (%d, %d)\n", x, y);
        HgCircle(x, y, 20);  // クリックされた位置に半径20の円を描く
    }
    HgGetChar();
    HgCloseAll();
    return 0;
}

