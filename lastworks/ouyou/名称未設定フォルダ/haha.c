#include <stdio.h>
#include <handy.h>

int main() {
    int x = 0;
    int n = 0;  // 頂点の数
    double r = 300;
    double a = 0;
    double b = 0;
    double c = 0;

    printf("x の値を入力してください: ");
    scanf("%d", &x);

    printf("頂点の数を入力してください: ");
    scanf("%d", &n);

    double xp[n];
    double yp[n];

    printf("頂点の座標を入力してください (x y の順で入力): \n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &xp[i], &yp[i]);
    }

    printf("r の値を入力してください: ");
    scanf("%lf", &r);

    printf("a の値を入力してください: ");
    scanf("%lf", &a);

    printf("b の値を入力してください: ");
    scanf("%lf", &b);

    printf("c の値を入力してください: ");
    scanf("%lf", &c);

    HgOpen(800, 600);

    HgSetColor(HG_BLACK);
    HgSetWidth(2.0);
    HgLine(x, 0, x, 600);  // 垂直な直線を描画

    HgSetColor(HgRGBA(r, a, b, c));
    HgPolygon(x, xp, yp);  // 多角形を描画

    HgGetChar();  // キー入力待機

    HgClose();

    return 0;
}
