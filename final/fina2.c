#include <handy.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    doubleLayer layers;  // ダブルバッファ用レイヤー
    int windowID;        // ウィンドウの番号
    int layerID;         // レイヤー番号

    windowID = HgOpen(600, 600);           // ダブルバッファ用
    layers = HgWAddDoubleLayer(windowID);  // ダブルバッファ用

    // 地面================
    int groBoxX = 0;
    int groBoxY = 0;
    int groHigh = 100;
    int groWeight = 600;

    // 芋虫の体==========================

    int fiCircleX = 415;
    int secCircleX = fiCircleX + 30;
    int thrCircleX = secCircleX + 30;
    int CircleY = 120;
    int CircleR = 15;

    // 芋虫の目
    double fiEye = 407.5;
    double seEye = 422.5;
    int EyeR = 5;
    int legR = 27;
    // 芋虫の足
    double fiLegX0 = 437.5;
    double fiLegY0 = CircleY;
    double fiLegX1 = fiLegX0;
    double fiLegY1 = CircleY - legR;

    double seLegX0 = fiLegX0 + 15;
    double seLegY0 = CircleY;
    double seLegX1 = seLegX0;
    double seLegY1 = CircleY - legR;

    double thLegX0 = seLegX0 + 15;
    double thLegY0 = CircleY;
    double thLegX1 = thLegX0;
    double thLegY1 = CircleY - legR;

    double foLegX0 = thLegX0 + 15;
    double foLegY0 = CircleY;
    double foLegX1 = foLegX0;
    double foLegY1 = CircleY - legR;
    // 芋虫の触覚
    double horn1LegX0 = 437.5 - 15;
    double horn1LegY0 = CircleY;
    double horn1LegX1 = horn1LegX0;
    double horn1LegY1 = CircleY + legR - 2;

    double horn2LegX0 = horn1LegX0 - 15;
    double horn2LegY0 = CircleY;
    double horn2LegX1 = horn2LegX0;
    double horn2LegY1 = CircleY + legR - 2;
    // 芋虫の口
    int mouseX0 = fiEye;
    double mouseY0 = CircleY - 7.5;
    int mouseX1 = seEye;
    double mouseY1 = mouseY0;

    // 芋虫の描画
    HgLine(fiLegX0, fiLegY0, fiLegX1, fiLegY1);
    HgLine(seLegX0, seLegY0, seLegX1, seLegY1);
    HgLine(thLegX0, thLegY0, thLegX1, thLegY1);
    HgLine(foLegX0, foLegY0, foLegX1, foLegY1);

    HgCircle(fiCircleX, CircleY, CircleR);
    HgCircle(secCircleX, CircleY, CircleR);
    HgCircle(thrCircleX, CircleY, CircleR);

    HgCircle(fiEye, CircleY, EyeR);
    HgCircle(seEye, CircleY, EyeR);

    HgLine(horn1LegX0, horn1LegY0, horn1LegX1, horn1LegY1);
    HgLine(horn2LegX0, horn2LegY0, horn2LegX1, horn2LegY1);

    HgLine(mouseX0, mouseY0, mouseX1, mouseY1);

    HgBox(groBoxX, groBoxY, groWeight, groHigh);

    // 四角い物の体===============================================

    int humX = 20;  // 四角い物の体
    int humY = 100;
    int humW = 100;
    int humH = 150;
    int humMX = humX + 40;//四角い物の口
    int humMY = humY;

    HgBox(humX, humY, humW, humH);
    HgBox(humMX, humMY + 105, 5, 10);  // 四角い物の目
    HgBox(humX + 75, humY + 105, 5, 10);  // 四角い物の目
    HgBox(humX + 40, humY, 50, 80);       // 四角い物の口

    // アニメーション==============================================

    int i;
    int atX = secCircleX;//発射するたまのX座標
    int atY = CircleY;//発射するたまのY座標
    int speed = 60;//発射するたまのスピード
    int atR = 5;//発射するたまの半径

    for (i = 1; i <= 500; i++) {
        HgLine(fiLegX0, fiLegY0, fiLegX1, fiLegY1);
        HgLine(seLegX0, seLegY0, seLegX1, seLegY1);
        HgLine(thLegX0, thLegY0, thLegX1, thLegY1);
        HgLine(foLegX0, foLegY0, foLegX1, foLegY1);

        HgSetFillColor(HG_YELLOW);
        HgFillCircle(fiCircleX, CircleY, CircleR,0);
        HgSetFillColor(HG_PINK);
        HgFillCircle(secCircleX, CircleY, CircleR,0);
        HgSetFillColor(HG_BLUE);
        HgFillCircle(thrCircleX, CircleY, CircleR,0);

        HgSetFillColor(HG_BLACK);
        HgFillCircle(fiEye, CircleY, EyeR,0);
        HgFillCircle(seEye, CircleY, EyeR,0);

        HgLine(horn1LegX0, horn1LegY0, horn1LegX1, horn1LegY1);
        HgLine(horn2LegX0, horn2LegY0, horn2LegX1, horn2LegY1);

        HgLine(mouseX0, mouseY0, mouseX1, mouseY1);

        HgSetFillColor(HG_BROWN);
        HgFillBox(groBoxX, groBoxY, groWeight, groHigh);

        layerID = HgLSwitch(&layers);  // 表示レイヤを入れ替える
        // HgLClear(layerID);//描画用レイヤを消去する

        // 発射秒数=============================

        int time1 = 0 <= i && i < 30;
        int time2 = 50 < i && i < 90;
        int time3 = 140 < i && i < 180;
        int time4 = 250 < i && i < 300;
        int time5 = 340 < i && i < 400;

        // 発射間隔===========================

        if (time1 || time2 || time3 || time4 || time5) {
            HgWCircle(layerID, atX, atY, atR);  // たま
        }
        if (i % 15 == 0) {
            HgLClear(layerID);
            atX = secCircleX;//たまのカウントリセット
            HgSetFillColor(HG_WHITE);//口の色を白にする
            HgBoxFill(humMX,humMY,50,80,0);
            continue;
        }
        if (i == 200) {
        }
        atX -= speed;
        HgSleep(0.05);
        if (i == 421) {
            HgLClear(layerID);
            HgText(100, 50, "finish");
            HgSleep(5.1);
            return 0;
        }
        if(atX  < humMX + 80){//たまが四角いものの口に当たったら赤くなる
            HgSetFillColor(HG_RED);
            HgBoxFill(humMX,humMY,50,80,0);
            continue;
        }
        
    }

    //==============================================================
    HgGetChar();

    HgClose();
}
