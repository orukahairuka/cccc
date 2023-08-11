#include <stdio.h>


//chatgptniosietemoratta
#include <handy.h>

int main() {
    int centerX;
    int centerY;
    int width;
    int height;

    printf("中心のX座標を入力してください: ");
    scanf("%d", &centerX);

    printf("中心のY座標を入力してください: ");
    scanf("%d", &centerY);

    printf("幅を入力してください: ");
    scanf("%d", &width);

    printf("高さを入力してください: ");
    scanf("%d", &height);

    HgOpen(400, 400);

    // 四角形の描画
    int rect_x = centerX - width / 2;
    int rect_y = centerY - height / 2;
    HgBox(rect_x, rect_y, width, height);

    // 菱形の描画
    int diamond_x1 = centerX;
    int diamond_y1 = centerY + height / 2;
    int diamond_x2 = centerX + width / 2;
    int diamond_y2 = centerY;
    int diamond_x3 = centerX;
    int diamond_y3 = centerY - height / 2;
    int diamond_x4 = centerX - width / 2;
    int diamond_y4 = centerY;
    HgLine(diamond_x1, diamond_y1, diamond_x2, diamond_y2);
    HgLine(diamond_x2, diamond_y2, diamond_x3, diamond_y3);
    HgLine(diamond_x3, diamond_y3, diamond_x4, diamond_y4);
    HgLine(diamond_x4, diamond_y4, diamond_x1, diamond_y1);

    HgGetChar();
    HgClose();

    return 0;
}
