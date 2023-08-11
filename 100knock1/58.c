#include <stdio.h>

int main() {
    int data[5];
    int i;
    int j;
    int l;



    for (i = 0; i < 5; i++) {
        printf("data[%d] :",i);
        scanf("%d", &data[i]);
        

        for (j = 1; j < data[i] +1; j++) {
            printf("*");
            if (j % 5 == 0 ) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
