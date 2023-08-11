#include <stdio.h>
#include <handy.h>

int main(){

    int MiniBoxX = 0;
    int MiniBoxY = 0;
    int MiniBoxHigh = 230;
    int MiniBoxWeight = 120;
    int groundWeight = 600;
    int groundHeight = 60;
    int MidBoxX = 100;
    int MidBoxY = 0;
    int MidBoxWeight = 90;
    int MidBoxHeight = 260;
    int BigBoxX = 150;
    int BigBoxY = 60;
    int BigBoxWeight = 230;
    int BigBoxHeight = 140;
    int treeX = 500;
    int treeY = 40;
    int treeWeight = 5;
    int treeHeight = 70;
    int greenX = 505;
    int greenY = 115;
    int greenR = 30;


    HgOpen(600,400);

    HgSetFillColor(HG_DGRAY);
    HgBoxFill(MiniBoxX,MiniBoxY,MiniBoxWeight,MiniBoxHigh,1);

    HgSetFillColor(HG_LGRAY);
    HgBoxFill(BigBoxX,BigBoxY,BigBoxWeight,BigBoxHeight,1);

    HgSetFillColor(HG_GRAY);
    HgBoxFill(MidBoxX,MidBoxY,MidBoxWeight,MidBoxHeight,0);

    HgSetFillColor(HG_GREEN);
    HgCircleFill(greenX,greenY,greenR,1);

    HgSetFillColor(HG_BLEND_SOVER);
    HgBoxFill(treeX,treeY,treeWeight,treeHeight,1);

    HgSetFillColor(HG_BROWN);
    HgBoxFill(0,0,groundWeight,groundHeight,1);


    
    HgGetChar();
    HgClose();
    
}
