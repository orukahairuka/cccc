#include <stdio.h>
#include <handy.h>

int main(){
    int i;
    double h = 100;
    double minW = 100;
    double minH = 50;
    double minX = 200;
    double minY = 100;
    HgOpen(600,400);

    for(i = 0; i < 100; i++){
        HgClear();
        HgBox(0,0,600,h);
        HgBox(minX,minY,minW,minH);
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
