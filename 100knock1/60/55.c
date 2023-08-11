#include <stdio.h>

int main() {
    int i,j;
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= 9; i++) {
            printf("とんで");
        }
        for (i = 1; i <= 3; i++) {
            printf("まわって");
        }
        printf("まわる\n");
    }
}
