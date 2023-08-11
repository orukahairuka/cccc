/*****
    mouse.c
    マウスがクリックされた場所に円を描く
    M.Minakuchi
*****/
#include <stdio.h>
#include <handy.h>

int main() {
    hgevent *event;  // HandyGraphicのイベントを扱うための変数
    int x, y;  // クリックされた座標

    HgOpen(600, 400);
    HgSetEventMask(HG_MOUSE_DOWN);  // マウスクリックのみを検出するように設定

    for (;;) {
        event = HgEvent();  // マウスクリックを待つ。クリックされた情報はeventに格納される。
        x = event->x;  // クリックされたx座標を取り出す
        y = event->y;  // クリックされたy座標を取り出す
        printf("clicked (%d, %d)\n", x, y);
        HgCircle(x, y, 20);  // クリックされた位置に半径20の円を描く
    }

    HgClose();
    return 0;
}
