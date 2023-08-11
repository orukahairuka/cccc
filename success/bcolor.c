#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(600,400);
    HgSetColor(HG_RED);
    HgBox(10,150,100,100);

    HgSetWidth(4);
    HgBox(130,150,100,100);
    HgSetColor(HG_BLUE);
    
    HgBox(250,150,100,100);

    HgSetWidth(1);
    HgBox(370,150,100,100);
    
    
    HgSetColor(HG_BLACK);
   
    HgBox(490,150,100,100);

    HgGetChar();
    HgClose();
    return 0;
}
