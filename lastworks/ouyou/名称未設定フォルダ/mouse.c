/*****
    mouse.c
    マウスがクリックされた座標を表示する
    M.Minakuchi
*****/
#include <stdio.h>
#include <handy.h>

int main() {
    hgevent *event;  // HandyGraphicのイベントを扱うための変数
    int x, y;  // クリックされた座標

    HgOpen(400, 400);
    HgSetEventMask(HG_MOUSE_DOWN);  // マウスクリックのみを検出するように設定

    for (;;) {
        event = HgEvent();  // マウスダウンを待つ。イベント情報はeventに格納される。
        x = event->x;  // クリックされたx座標を取り出す
        y = event->y;  // クリックされたy座標を取り出す
        printf("clicked (%d, %d)\n", x, y);
    }

    HgClose();
    return 0;
}
