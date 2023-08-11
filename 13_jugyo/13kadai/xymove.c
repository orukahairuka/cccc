#include <stdio.h>
#include <handy.h>

#define R 50
int main (){

    int i = 0;
    HgOpen(400,400);

    while(i <= 400){
        HgClear();
        HgCircle(i,i,R);
        i+= 5;
        HgSleep(0.05);
        }
        HgGetChar();
        HgClose();
        return 0;
}
