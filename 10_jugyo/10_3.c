#include <stdio.h>

int main(){

    int num;

    for(num = 1; num <= 100; num++){
        if(num % 2 ==1)continue;
        printf("%d * %d = %d\n", num,num,num * num);
    }

    return 0;
}
