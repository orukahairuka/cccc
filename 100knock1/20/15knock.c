/*15knock.c
整数値を入力させ
0から入力値を超えない値まで
2ずつ増やして表示する*/

#include <stdio.h>

int main() {
    int i = 0;
    int num1;
    int num2;

    num2 = 2 * i;

    printf("input number");
    scanf("%d", &num1);

    for (i = 0; num2 < num1; i++) {
        num2 = 2 * i;
        printf("%d\n", num2);
    }
}
