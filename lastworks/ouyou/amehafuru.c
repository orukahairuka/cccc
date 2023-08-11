#include <stdio.h>
#include<handy.h>

int main(){
    int x = 0;
    int y = 0;

    HgOpen(600,400);

    for(;;){
        x += 1;
        y += 1;
        HgClear();
        HgLine(300-4*x,300-4*x,250-4*x,250-4*y);
        HgLine(200-5*x,300-5*x,150-5*x,250-5*y);
        HgLine(700-4*x,700-4*x,650-4*x,650-4*y);
        HgLine(300-4*x,300-4*x,250-4*x,250-4*y);
        HgSleep(0.05);
    }
    HgGetChar();
    HgClose();
}
