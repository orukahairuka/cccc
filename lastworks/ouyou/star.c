/*****
    mouse.c
    マウスがクリックされた場所に円を描く
    M.Minakuchi
    右上の四角の範囲を押せば画面をクリアする
*****/
#include <handy.h>
#include <stdio.h>

#define BUTTON_X 300
#define BUTTON_Y 350
#define BUTTON_WIDTH 80
#define BUTTON_HEIGHT 30

int main() {
    hgevent *event;  // HandyGraphicのイベントを扱うための変数
    int x0 = 0;       // クリックされた座標
    int y0 = 0;
    int x1 = 0;
    int y1 = 0;

    HgOpen(600, 400);
    HgSetEventMask(HG_MOUSE_DOWN);  // マウスクリックのみを検出するように設定

    
    for (;;) {
        event =
            HgEvent();  // マウスクリックを待つ。クリックされた情報はeventに格納される。
        x0 = event->x;   // クリックされたx座標を取り出す
        y0 = event->y;   // クリックされたy座標を取り出す
        printf("clicked 0(%d, %d)\n", x0, y0);
        printf("clicked 1(%d, %d)\n", x1, y1);
        HgLine(x0,y0,x1,y1);
        x1 = event->x;
        y1 = event->y;
        x0 = x1;
        y0 = y1;
    }

    HgClose();
    return 0;
}
