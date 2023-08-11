#include <stdio.h>

int main() {
    int money = 0;
    int man = 0;
    int total = 0;

    printf("人数");
    scanf("%d", &man);

    if (man < 5) {
        total = man * 600;
    } else if (5 <= man && man < 20) {
        total = 550 * man;
    } else if (man >= 20) {
        total = 500 * man;
    }
    printf("料金:%d\n", total);

    return 0;
}
