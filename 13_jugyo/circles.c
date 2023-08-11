/*
Sakurai Erika
縁をかく
circles.c
*/

#include <stdio.h>
#include <handy.h>

int main(){
    int x;
    int y;

    HgOpen(400,400);

    for(x = 50; x< 400; x += 50){
        for(y = 50; y < 400; y += 50){
            HgCircle(x,y,50);
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
