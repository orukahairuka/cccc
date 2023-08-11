/*****
 * square.c
 * Sakurai Erika
 * 2353702
 * 入力した値まで２条を繰り返す
*/
#include<stdio.h>

int main(void){

    int i = 0;
    int number = 0;
    int total;

    printf("input number:\n");
    scanf("%d",&number);

    while(i < number){
        total = i * i;
        printf("%d * %d = %d\n",i,i,total);
        i++;
    }
    return 0;
}
