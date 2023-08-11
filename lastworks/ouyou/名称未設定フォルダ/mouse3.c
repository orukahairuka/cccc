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
    int x, y;        // クリックされた座標

    HgOpen(400, 400);
    HgSetEventMask(HG_MOUSE_DOWN);  // マウスクリックのみを検出するように設定
    HgColorCode(0x00A3AF);
    HgBoxFill(BUTTON_X, BUTTON_Y, BUTTON_WIDTH, BUTTON_HEIGHT,1);

    for (;;) {
        event =
            HgEvent();  // マウスクリックを待つ。クリックされた情報はeventに格納される。
        x = event->x;   // クリックされたx座標を取り出す
        y = event->y;   // クリックされたy座標を取り出す
        printf("clicked (%d, %d)\n", x, y);
        if (x > BUTTON_X && (BUTTON_X + BUTTON_WIDTH) > x && y > BUTTON_Y &&
            (BUTTON_Y + BUTTON_HEIGHT > y)) {
            HgClear();
            HgBoxFill(BUTTON_X, BUTTON_Y, BUTTON_WIDTH, BUTTON_HEIGHT,1);
        } else {
            HgCircle(x, y, 20);  // クリックされた位置に半径20の円を描く
        }
    }

    HgClose();
    return 0;
}
