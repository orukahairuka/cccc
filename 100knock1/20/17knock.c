#include <stdio.h>

int main() {
    int num[10];
    int i = 0;
    for (i = 0; i < 10; i++) {
        num[i] = i;
        printf("%d\n", num[i]);
    }

    return 0;
}
