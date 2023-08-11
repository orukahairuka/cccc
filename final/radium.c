#include <stdio.h>
#include <handy.h>
#include <stdlib.h>




int main(){
    doubleLayer layers;//ダブルバッファ用レイヤー
    int windowID;//ウィンドウの番号
    int layerID;//レイヤー番号
    
    windowID = HgOpen(600,600);//ダブルバッファ用
    layers = HgWAddDoubleLayer(windowID);//ダブルバッファ用
    

    int groBoxX = 0;
    int groBoxY = 0;
    int groHigh = 100;
    int groWeight = 600;

    int fiCircleX = 415;
    int secCircleX = fiCircleX + 30;
    int thrCircleX = secCircleX + 30;
    int CircleY = 120;
    int CircleR = 15;

    double fiEye = 407.5;
    double seEye = 422.5;
    int EyeR = 5;
    int legR = 27;

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

    double horn1LegX0 = 437.5 - 15;
    double horn1LegY0 = CircleY;
    double horn1LegX1 = horn1LegX0;
    double horn1LegY1 = CircleY + legR - 2;

    double horn2LegX0 = horn1LegX0 - 15;
    double horn2LegY0 = CircleY;
    double horn2LegX1 = horn2LegX0;
    double horn2LegY1 = CircleY + legR - 2;

    int mouseX0 = fiEye;
    double mouseY0 = CircleY - 7.5;
    int mouseX1 = seEye;
    double mouseY1 = mouseY0;





    
    
    HgLine(fiLegX0,fiLegY0,fiLegX1,fiLegY1);
    HgLine(seLegX0,seLegY0,seLegX1,seLegY1);
    HgLine(thLegX0,thLegY0,thLegX1,thLegY1);
    HgLine(foLegX0,foLegY0,foLegX1,foLegY1);


    HgCircle(fiCircleX,CircleY,CircleR);
    HgCircle(secCircleX,CircleY,CircleR);
    HgCircle(thrCircleX,CircleY,CircleR);

    HgCircle(fiEye,CircleY,EyeR);
    HgCircle(seEye,CircleY,EyeR);


    HgLine(horn1LegX0,horn1LegY0,horn1LegX1,horn1LegY1);
    HgLine(horn2LegX0,horn2LegY0,horn2LegX1,horn2LegY1);

    HgLine(mouseX0,mouseY0,mouseX1,mouseY1);

    HgBox(groBoxX,groBoxY,groWeight,groHigh);
    

//human===============================================

    int humX = 20;
    int humY = 100;
    int humW = 100;
    int humH = 150;

    HgBox(humX,humY,humW,humH);

//アニメーション==============================================

    int i;
    int atX = secCircleX;
    int atY = CircleY;
    int speed = 20;
    int atR = 5;

    for(;;){
        layerID = HgLSwitch(&layers);//表示レイヤを入れ替える
        HgLClear(layerID);//描画用レイヤを消去する
        HgWCircle(layerID,atX,atY,atR);//描画用レイヤに円をかく
        atX += speed;


    }
    



//==============================================================
    HgGetChar();



    HgClose();

}
