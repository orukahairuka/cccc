#include <stdio.h>

int main(void){

    int number;
    int i = 0;
    int total = 0;

    printf("input number:\n");
    scanf("%d",&number);

    for(i=1; i<=number; i++){
        total += i;
    }

    printf("sum = %d\n",total);
    return 0;
}
