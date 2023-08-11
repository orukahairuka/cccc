/*
g2353702 Sakurai Erika
*/



#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(600,400);
    HgSetColor(HG_RED);
    HgBox(10,150,100,100);//firstbox red

    HgSetWidth(4);
    HgBox(130,150,100,100); //second box red
    
    HgSetFillColor(HG_BLUE);
    HgBoxFill(250,150,100,100,0); // third box blue
    
    
    HgSetWidth(1);
    HgSetColor(HG_BLUE);
    HgBox(370,150,100,100); // forth box blue
    
    
    
    HgSetFillColor(HG_BLACK);
    HgBoxFill(490,150,100,100,0); // fifth box black 
   
    HgGetChar();
    HgClose();
    return 0;
}
