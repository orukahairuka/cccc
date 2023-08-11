/*knock14.c*/

#include <stdio.h>

int main() {
    int num = 0;
    int i = 0;
    int num2;

    printf("input number:");
    scanf("%d", &num);

    num2 = num;

    for (i = 0; i < num; i++) {
        printf("%d\n", num2);
        num2--;
    }

    printf("0\n");
}
