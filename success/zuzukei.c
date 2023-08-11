#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600, 400);

    HgSetColor(HG_RED);
    HgBox(10, 150, 100, 100); //the left side square

    HgSetWidth(4);
    HgSetColor(HG_BLUE);
    HgBox(130, 150, 100, 100); // 2nd square

    HgSetColor(HG_GREEN);
    HgBox(250, 150, 100, 100); // 3rd square

    HgSetColor(HG_YELLOW);
    HgSetWidth(1);
    HgBox(370, 150, 100, 100); // 4th square

    HgSetColor(HG_PURPLE);
    HgBox(490, 150, 100, 100); //the right side square

    HgGetChar();
    HgClose();
    return 0;
}
