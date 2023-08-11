/*
    Erika
    2353702
    pyramid.c
*/

#include <handy.h>
#include <stdio.h>

int main() {
    int x;  // 円のx座標
    int y;  // 円のy座標
    int r;  // 円の半径
    int num, num2;
    int i;  // 繰り返す数
    int j;  // 繰り返す数

    printf("幾つですか？");
    scanf("%d", &num);

    num2 = num;

    r = 300 / num;

    HgOpen(600, 600);

    for (i = 0; i < num; i++) {
        x = r + 2 * r * i;
        for (j = 0; j < num2; j++) {
            y = r + 2 * r * j;
            HgCircle(x, y, r);
        }
        num2--;
    }
    HgGetChar();
    HgClose();
    return 0;
}
