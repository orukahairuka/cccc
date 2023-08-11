#include <stdio.h>

int main(){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int total = 0;
    int i;

    for(i = 0; i < 9 ;i++){
        total = array[i] - array[i+1];
    printf("%d\n",total);
    }
    return 0;
}
