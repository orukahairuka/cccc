#include <stdio.h>

int main() {
    int a, b;
    int cul = 1;

    int ind1[10] ={3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int ind2[10] ={3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    printf("input index1:");
    scanf("%d", &a);

    printf("input index2:");
    scanf("%d", &b);

    cul = ind1[a] * ind2[b];

    printf("%d\n", cul);

    return 0;
}
