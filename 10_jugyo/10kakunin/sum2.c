/*
Sakurai Erika
2353702
sum2.c
入力して合計を計算する
入力がゼロの時にプログラム終了する
*/

#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    int number;

    for (;;) {
        printf("input number");
        scanf("%d", &number);

        if (number == 0) {
            printf("合計値は%d\n", sum);
            return 0;
        } else {
            sum += number;
        }
    }

    return 0;
}
