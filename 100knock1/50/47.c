#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int box;

    printf("input a:");
    scanf("%d", &a);

    printf("input b:");
    scanf("%d", &b);

    box = a;
    a = b;
    b = box;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
