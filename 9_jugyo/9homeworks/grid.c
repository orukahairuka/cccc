
/*
整数値を入力させ、


*/

#include <handy.h>
#include <stdio.h>

int x0;
int y0;
int x1;
int y1;
int i;
int num1;
int num2;
int adx0, adx1, ady0, ady1;

int main() {
    printf("行を入力してください");
    scanf("%d", &num1);
    printf("列を入力して下さい");
    scanf("%d", &num2);

    HgOpen(600, 600);

    for (i = 0; i < num1; i++) {
        x0 = 600 / num1;
        y0 = 600 / num2;
        x1 = x0;
        y1 = y0;

        adx0 = i * x0;
        ady0 = i * y0;
        adx1 = i * x1;
        ady1 = i * y1;

        HgLine(0, ady0, 600, ady1);
        HgLine(adx0, 0, adx1, 600);
    }

    HgGetChar();
    HgClose();
}
