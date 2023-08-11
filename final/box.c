#include <stdio.h>
#include <handy.h>
int main(void)
{
    int i;
    double w, h;
    HgOpen(500, 400);
    w = 100;
    h = 40;
    for (i = 1; i <= 15; i++) {
        w -= 4;
        h += 4;
        HgBox(i * 28, i * 20, w, h);
    }
    getchar();
    HgClose();
    return 0;
}
