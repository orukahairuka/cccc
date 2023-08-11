/*1から20まで順に表示するが
、5の倍数の場合は数字の代わりにbarと表示する
プログラムを作成せよ。*/

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 5 == 0) {
            printf("bar\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
