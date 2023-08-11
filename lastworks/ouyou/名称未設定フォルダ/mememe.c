#include <stdio.h>
#include <handy.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 0;
    int y = 0;
    int random;
    int ame[50];
    int ame2[50];
    int i;
    int j;

    HgOpen(600, 400);

    srand(time(NULL)); // 乱数の種を初期化

    for (;;) {
        x += 1;
        y += 1;
        random = rand();
        for (i = 0; i < 50; i++) {
            ame[i] = random % 4;
            ame2[i] = random % 4;
        }
        HgClear();
        printf("ame!!%d\n",ame[j]);
        printf("ame2!!%d\n",ame2[j]);

        HgLine(ame2[j] - 15 * ame[j], ame2[j] - 15 * ame[j],
               (ame2[j] - 50) - 15 * ame[j], (ame2[j] - 50) - 15 * ame[j]);
        /*HgLine(200 - 5 * x, 300 - 5 * x, 150 - 5 * x, 250 - 5 * y);
        HgLine(700 - 4 * x, 700 - 4 * x, 650 - 4 * x, 650 - 4 * y);
        j++;
        HgLine(300 - 4 * x, 300 - 4 * x, 250 - 4 * x, 250 - 4 * y);
        */
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
