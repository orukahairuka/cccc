#include <stdio.h>

int main() {
    int inNum;
    printf("input number:");
    scanf("%d", &inNum);

    if (inNum % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    return 0;
}
