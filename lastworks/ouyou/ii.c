#include <handy.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 600;  // ウィンドウの横の長さ
    int y = 400;  // ウィンドウの縦の長さ
    int key;      // 押したキーの値を覚えておく変数
    int j;

    int x1 = x / 8;  // 横のウィンドウを8等分したうちの一つの値

    HgOpen(600, 400);

    HgLine(x1, 0, x1, y);
    HgLine(x1 * 2, 0, x1 * 2, y);
    HgLine(x1 * 3, 0, x1 * 3, y);
    HgLine(x1 * 4, 0, x1 * 4, y);
    HgLine(x1 * 5, 0, x1 * 5, y);
    HgLine(x1 * 6, 0, x1 * 6, y);
    HgLine(x1 * 7, 0, x1 * 7, y);

    for (;;) {
        key = HgGetChar();
        // HgClear();
        if (key == 'k') {
            HgSetFillColor(HG_RED);
            HgBoxFill(0, 0, x1, y, 1);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'w') {
            HgSetFillColor(HG_GREEN);
            HgBoxFill(x1, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'y') {
            HgSetFillColor(HG_LGRAY);
            HgBoxFill(x1 * 2, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'e') {
            HgSetFillColor(HG_BLUE);
            HgBoxFill(x1 * 3, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'h') {
            HgSetFillColor(HG_DBLUE);
            HgBoxFill(x1 * 4, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 's') {
            HgSetFillColor(HG_YELLOW);
            HgBoxFill(x1 * 5, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 't') {
            HgSetFillColor(HG_PURPLE);
            HgBoxFill(x1 * 6, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'r') {
            HgSetFillColor(HG_ORANGE);
            HgBoxFill(x1 * 7, 0, x1, y, 1);
            HgLine(x1, 0, x1, y);
            HgLine(x1 * 2, 0, x1 * 2, y);
            HgLine(x1 * 3, 0, x1 * 3, y);
            HgLine(x1 * 4, 0, x1 * 4, y);
            HgLine(x1 * 5, 0, x1 * 5, y);
            HgLine(x1 * 6, 0, x1 * 6, y);
            HgLine(x1 * 7, 0, x1 * 7, y);
        }
        if (key == 'n') {
            HgSetFillColor(HG_BROWN);
            HgBoxFill(195, 100, 60, 100, 0);  // 長方形胴体
            HgBoxFill(185, 80, 80, 20, 0);    // 土台
            HgCircleFill(225, 200, 30, 0);    // 頭の部分
            HgBoxFill(175, 170, 20, 10, 0);   // 左腕の上
            HgBoxFill(175, 150, 10, 30, 0);   // 左腕の下
            HgBoxFill(255, 150, 20, 10, 0);   // 右腕の上
            HgBoxFill(265, 150, 10, 30, 0);   // 右腕の下
            HgSetFillColor(HG_GRAY);
            HgCircleFill(213, 195, 5, 0);   // 右目
            HgCircleFill(238, 195, 5, 0);   // 左目
            HgBoxFill(223, 170, 4, 50, 0);  // 鼻
            HgCircleFill(225, 160, 7, 0);   // 口
        }
        if (key == 'm') {
            for (;;) {
                HgSetFillColor(HG_WHITE);
                HgCircleFill(450, 200, 20, 1);  // アイス
                HgSetFillColor(HG_RED);
                HgCircleFill(468, 205, 7, 0);  // さくらんぼ
                HgSetFillColor(HG_GREEN);
                HgBoxFill(425, 130, 50, 70, 0);  // 長方形
                HgCircleFill(450, 130, 25, 0);   // 半円下
                HgBoxFill(430, 80, 40, 10, 0);   // 土台下の長方形
                HgBoxFill(445, 90, 10, 35, 0);   // 土台上の長方形

                // ランダムな水滴の描画
                srand(time(NULL));
                int i;
                int randomX = 0;
                int randomY = 0;
                int hani1 = randomX >= 425 && randomX <= 475 &&
                            randomY >= 130 && randomY <= 180;
                for (i = 0; i < 200; i++) {
                    int randomX = rand() % 50;
                    int randomY = rand() % 70;

                    HgCircle(425 + randomX, 130 + randomY, 5);

                    int randomX2 = rand() % 600;
                    int randomY2 = rand() % 400;

                    HgCircle(randomX2, randomY2, 7);

                    HgSleep(0.05);
                }
            }
            int hani1 = randomX1 >= 425 && randomX1 <= 475

            if(key == ' '){
                return 0;
            }
        }

        if (key == ' ') break;  // スペースが押されたらループを抜ける

        // HgGetChar();
    }

    HgClose();

    return 0;
}
