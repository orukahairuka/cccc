/*整数値を5回入力させ
、それらの値の合計を表示する
プログラムを繰り返しを使って作成せよ。*/

#include <stdio.h>

int main() {
    int num[5];
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        printf("input number:");
        scanf("%d", &num[i]);
    }

    i = 0;

    for (i = 0; i < 5; i++) {
        sum += num[i];
    }

    printf("sum = %d\n", sum);
}
