#include <stdio.h>

int main(void){

    int i;
    int number;
    int total;

    printf("input number:\n");
    scanf("%d",&number);

    for(i=0; i<number; i++){
        total = i * i;
        printf("%d * %d = %d\n",i,i,total);

    }

    return 0;
}
