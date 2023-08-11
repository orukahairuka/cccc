#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int judge;

    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);
    printf("input c:");
    scanf("%d", &c);

    judge = b * b - (4 * a * c);

    if (judge == 0) {
        printf("重解\n");
    } else if (judge > 0) {
        printf("ふたつの実数解\n");
    } else{
        printf("二つの虚数解\n");
    }
    return 0;
}
