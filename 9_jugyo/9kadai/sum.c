/*
Sakurai Erila
2353702
sum.c
入力した値までの総和を計算する
*/

#include <stdio.h>

int main(void){

    int number;
    int i = 0;
    int total = 0;

    printf("input number:\n");
    scanf("%d",&number);


    while(i < number){
        i++;
        total += i;
    }

    printf("sum = %d\n",total);
    return 0;
}
