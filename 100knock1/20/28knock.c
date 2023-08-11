/*整数値を入力させ、
その値の階乗を表示するプログラムを作成せよ。
ただし、0以下の値を入力した場合は1と表示する。*/

#include <stdio.h>

int main() {
    int num = 0;
    int mul = 1;
    int i;

    printf("input number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        mul *= i;
    }

    printf("factorial = %d\n", mul);

    return 0;
}
