#include <handy.h>
#include <stdio.h>

int main() {

    int backBoxX = 0;          // 背景の四角形のX座標
    int backBoxY = 0;          // 背景の四角形のY座標
    int backBoxWeight = 600;   // 背景の四角形の幅
    int backBoxHeight = 400;   // 背景の四角形の高さ
    int oneBoxX = 0;           // 左から一番目の四角のX座標
    int oneBoxY = 0;           // 左から一番目の四角のY座標
    int oneBoxHigh = 230;      // 左から一番目の四角の高さ
    int oneBoxWeight = 120;    // 左から一番目の四角の幅
    int groundWeight = 600;    // 地面の四角の幅
    int groundHeight = 60;     // 地面の四角の高さ
    int twoBoxX = 100;         // 左から二番目の四角のX座標
    int twoBoxY = 0;           // 左から二番目の四角のY座標
    int twoBoxWeight = 90;     // 左から二番目の四角の幅
    int twoBoxHeight = 260;    // 左から二番目の四角の高さ
    int threeBoxX = 150;       // 左から三番目の四角のX座標
    int threeBoxY = 60;        // 左から三番目の四角のY座標
    int threeBoxWeight = 230;  // 左から三番目の四角の幅
    int threeBoxHeight = 140;  // 左から三番目の四角の高さ
    int treeX = 500;           // 木の幹の四角のX座標
    int treeY = 40;            // 木の幹の四角のY座標
    int treeWeight = 5;        // 木の幹の四角の幅
    int treeHeight = 70;       // 木の幹の四角の高さ
    int greenX = 505;          // 葉の円のX座標
    int greenY = 115;          // 葉の円のY座標
    int greenR = 30;           // 葉の円の半径
    int LcarY = 65;
    int LcarX = 80;
    int LcarW = 100;
    int LcarH = 25;
    int ScarY = 80;
    int ScarX = LcarX + 25;
    int ScarW = 50;
    int ScarH = 30;
    int carCircle1X = ScarX;
    int carCircle1Y = 66;
    int carCircle1R = 12;
    int carCircle2X = 155;
    int carCircle2Y = carCircle1Y;
    int carCircle2R = carCircle1R;
    int speed = 20;


    int key;
    int i;
    int j;
    HgOpen(600, 400);
    printf("どのくらいのスピードを出しますか？\n");
    scanf("%d",&speed);

    for (;;) {
        HgClear();
        HgSetFillColor(HG_BLACK);
        HgBoxFill(backBoxX, backBoxY, backBoxWeight, backBoxHeight, 0);

        HgSetFillColor(HG_DGRAY);
        HgBoxFill(oneBoxX, oneBoxY, oneBoxWeight, oneBoxHigh, 1);

        HgSetFillColor(HG_LGRAY);
        HgBoxFill(threeBoxX, threeBoxY, threeBoxWeight, threeBoxHeight, 1);

        HgSetFillColor(HG_GRAY);
        HgBoxFill(twoBoxX, twoBoxY, twoBoxWeight, twoBoxHeight, 0);

        HgSetFillColor(HG_GREEN);
        HgCircleFill(greenX, greenY, greenR, 1);

        HgSetFillColor(HG_BLEND_SOVER);
        HgBoxFill(treeX, treeY, treeWeight, treeHeight, 1);

        HgSetFillColor(HG_BROWN);
        HgBoxFill(0, 0, groundWeight, groundHeight, 1);

        HgSetFillColor(HG_RED);
        HgBoxFill(LcarX,LcarY,LcarW,LcarH,0);
        
        HgSetFillColor(HG_RED);
        HgBoxFill(ScarX,ScarY,ScarW,ScarH,0);

        HgSetFillColor(HG_BLACK);
        HgCircleFill(carCircle1X,carCircle1Y,carCircle1R,1);

        HgSetFillColor(HG_BLACK);
        HgCircleFill(carCircle2X,carCircle2Y,carCircle2R,1);

        if(LcarX < 600){
        LcarX += speed;
        ScarX += speed;
        carCircle1X += speed;
        carCircle2X += speed;
        }else if(600 <= LcarX){
            LcarX = 80;
            ScarX = LcarX + 25;
            carCircle1X = ScarX;
            carCircle2X = 155;
            speed += 10;
        }
        
        
        if(speed >= 100){
            return 0;
        }


        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
}
