#include <stdio.h>

int main() {
    int height[5] = {163, 157, 176, 180, 166};
    int studentNum[5] = {54400, 54401, 54402, 54403, 54404};
    int num1;
    int i;

    for (i = 0; i < 5; i++) {
        printf("学生番号? ");
        scanf("%d", &num1);

        // 学生番号が studentNum 配列に存在するかチェック
        int found = 0;
        for (int j = 0; j < 5; j++) {
            if (num1 == studentNum[j]) {
                found = 1;
                printf("%d番の身長は%dcmです。\n", num1, height[j]);
                break;
            }
        }

        if (!found) {
            printf("学生番号 %d は存在しません。\n", num1);
        }
    }

    return 0;
}
