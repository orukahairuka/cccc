/*****
    keyFigure.c
    押したキーに応じて図形を描く
    M.Minakuchi
*****/
#include <stdio.h>
#include <handy.h>

int main() {
    int key;  // 押したキーの値を覚えておく変数

    HgOpen(400, 400);
    for (;;) {
        key = HgGetChar();
        HgClear();
        switch(key){
        case 'o':
            HgCircle(200, 200, 150);
            break;
        case 's':
            HgBox(100, 100, 200, 200);
            break;
        case 'x':
            HgLine(100, 100, 300, 300);
            HgLine(300, 100, 100, 300);
            break;
        case ' ':
             break;  // スペースが押されたらループを抜ける
        }
    }

    HgClose();
    return 0;
}
