#include <handy.h>
#include <stdio.h>
#include <stdlib.h>

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
    int key;                   // 入力のキーワード
    int i;
    int j;
    int LcarY = 65;           // 大きい部品の車の四角のY座標
    int LcarX = 80;           // 大きい部品の車の四角のX座標
    int LcarW = 100;          // 大きい部品の車の四角の幅
    int LcarH = 25;           // 大きい部品の車の四角の高さ
    int ScarY = 80;           // 小さい部品の車の四角のY座標
    int ScarX = LcarX + 25;   // 小さい部品の車の四角のX座標
    int ScarW = 50;           // 小さい部品の車の四角の幅
    int ScarH = 30;           // 小さい部品の車の四角の高さ
    int carCircle1X = ScarX;  // 左から一番目の車のタイヤのX座標
    int carCircle1Y = 66;     // 左から一番目の車のタイヤのY座標
    int carCircle1R = 12;     // 左から一番目の車のタイヤの半径
    int carCircle2X = 155;    // 左から二番目の車のタイヤのX座標
    int carCircle2Y = carCircle1Y;  // 左から二番目の車のタイヤのY座標
    int carCircle2R = carCircle1R;  // 左から二番目の車のタイヤの半径
    int speed = 20;                 // 車のスピード

    HgOpen(600, 400);
    // 背景の四角の描写
    HgSetFillColor(HG_SKYBLUE);
    HgBoxFill(backBoxX, backBoxY, backBoxWeight, backBoxHeight, 0);
    // 左から一番目の四角
    HgSetFillColor(HG_DGRAY);
    HgBoxFill(oneBoxX, oneBoxY, oneBoxWeight, oneBoxHigh, 1);
    // 左から三番目の四角
    HgSetFillColor(HG_LGRAY);
    HgBoxFill(threeBoxX, threeBoxY, threeBoxWeight, threeBoxHeight, 1);
    // 左から二番目のしかく
    HgSetFillColor(HG_GRAY);
    HgBoxFill(twoBoxX, twoBoxY, twoBoxWeight, twoBoxHeight, 0);
    // 葉の円の描写
    HgSetFillColor(HG_GREEN);
    HgCircleFill(greenX, greenY, greenR, 1);
    // 木の幹の四角の描写
    HgSetFillColor(HG_BLEND_SOVER);
    HgBoxFill(treeX, treeY, treeWeight, treeHeight, 1);
    // 地面四角の描写
    HgSetFillColor(HG_BROWN);
    HgBoxFill(0, 0, groundWeight, groundHeight, 1);

    /******

    aかbを選択する,
    aを押せば夜になって車がどんどん早くなるアニメーション
    bを押せば雪がたくさん降る

    ******/
    printf("aかbを入力してください\n");
    key = HgGetChar();
    switch (key) {
        case 'a':  // 夜になって車が早く走るアニメーション
                for (;;) {
                    HgClear();
                    // 背景の四角の描写
                    HgSetFillColor(HG_BLACK);
                    HgBoxFill(backBoxX, backBoxY, backBoxWeight, backBoxHeight,
                              0);
                    // 左から一番目の四角の描写
                    HgSetFillColor(HG_DGRAY);
                    HgBoxFill(oneBoxX, oneBoxY, oneBoxWeight, oneBoxHigh, 1);
                    // 左から三番目の四角の描写
                    HgSetFillColor(HG_LGRAY);
                    HgBoxFill(threeBoxX, threeBoxY, threeBoxWeight,
                              threeBoxHeight, 1);
                    // 左から二番目の四角の描写
                    HgSetFillColor(HG_GRAY);
                    HgBoxFill(twoBoxX, twoBoxY, twoBoxWeight, twoBoxHeight, 0);
                    // 葉の円の描写
                    HgSetFillColor(HG_GREEN);
                    HgCircleFill(greenX, greenY, greenR, 1);
                    // 木の幹の四角の縁
                    HgSetFillColor(HG_BLEND_SOVER);
                    HgBoxFill(treeX, treeY, treeWeight, treeHeight, 1);
                    // 地面の四角の円の描写
                    HgSetFillColor(HG_BROWN);
                    HgBoxFill(0, 0, groundWeight, groundHeight, 1);
                    // 大きい車の部品の四角の描写
                    HgSetFillColor(HG_RED);
                    HgBoxFill(LcarX, LcarY, LcarW, LcarH, 0);
                    // 小さい車の部品の四角の描写
                    HgSetFillColor(HG_RED);
                    HgBoxFill(ScarX, ScarY, ScarW, ScarH, 0);
                    // 左から一番目の車のタイヤ
                    HgSetFillColor(HG_BLACK);
                    HgCircleFill(carCircle1X, carCircle1Y, carCircle1R, 1);
                    // 左から二番目の車のタイヤ
                    HgSetFillColor(HG_BLACK);
                    HgCircleFill(carCircle2X, carCircle2Y, carCircle2R, 1);

                    if (LcarX < 600) {
                        LcarX += speed;
                        ScarX += speed;
                        carCircle1X += speed;
                        carCircle2X += speed;
                    } else if (600 <= LcarX) {
                        LcarX = 80;
                        ScarX = LcarX + 25;
                        carCircle1X = ScarX;
                        carCircle2X = 155;
                        speed += 15;
                    }

                    if (speed >= 150) {
                        return 0;
                    }
                }

                HgSleep(0.05);

            HgGetChar();
            HgClose();

        case 'b':
            // 大雪の降るアニメーション
            HgText(240, 5, "うわあ、大雪だあ！！！");

            for (;;) {
                HgSetFillColor(HG_DBLUE);
                HgBoxFill(backBoxX, backBoxY, backBoxWeight, backBoxHeight, 1);

                HgSetFillColor(HG_DGRAY);
                HgBoxFill(oneBoxX, oneBoxY, oneBoxWeight, oneBoxHigh, 1);

                HgSetFillColor(HG_LGRAY);
                HgBoxFill(threeBoxX, threeBoxY, threeBoxWeight, threeBoxHeight,
                          1);

                HgSetFillColor(HG_GRAY);
                HgBoxFill(twoBoxX, twoBoxY, twoBoxWeight, twoBoxHeight, 0);

                HgSetFillColor(HG_GREEN);
                HgCircleFill(greenX, greenY, greenR, 1);

                HgSetFillColor(HG_BLEND_SOVER);
                HgBoxFill(treeX, treeY, treeWeight, treeHeight, 1);

                HgSetFillColor(HG_BROWN);
                HgBoxFill(0, 0, groundWeight, groundHeight, 1);

                HgText(240, 30, "雪降ってきた");

                for (j = 0; j < 200; j++) {
                    int randomX = rand() % 600;
                    int randomY = rand() % 600;
                    HgSetFillColor(HG_WHITE);
                    HgCircleFill(randomX, randomY, 5, 0);
                }

                HgSleep(0.05);
            }

            HgGetChar();
            HgClose();
    }
    return 0;
}
