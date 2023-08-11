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

    for (i = 0; i < 100; i++) {
        HgClear();
        HgBox(0, 0, 600, h);//長方形1
        HgBox(minX, minY, minW, minH);//長方形2
        h += 0.5;
        minH += 1.5;
        minW += 2;
        minX -= 1;
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
