#include <stdio.h>

int main() {
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int total;
    int i;
    printf("%d\n",array[0]);
    for (i = 0; i < 10; i++) {
        total = array[i];  
        total = array[total];
        printf("%d\n", total);
    }

    return 0;
}
