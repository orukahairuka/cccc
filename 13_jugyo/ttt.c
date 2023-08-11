#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50

int main() {
    int x = 0; //中心の座標
    int y = 0;
    int dy = 3; //y軸方向の移動
    int dx = 5; //x軸方向の移動

    HgOpen(WINDOWSIZE, WINDOWSIZE);

    while (1) {
        if (y + RADIUS > WINDOWSIZE || y - RADIUS < 0) {
            dy = -dy;
        }
        if (x + RADIUS > WINDOWSIZE || x - RADIUS < 0) {
            dx = -dx;
        }

        HgClear();
        HgCircle(x, y, RADIUS);
        HgSleep(0.05);
        x += dx;
        y += dy;
    }

    HgGetChar();
    HgClose();
    return 0;
}
