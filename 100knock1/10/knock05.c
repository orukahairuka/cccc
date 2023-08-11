#include <stdio.h>

int main(){

    int sum;//足し算
    int dif;//引き算
    int pro;//掛け算
    int quo;//割り算
    int num1;
    int num2;
    printf("input 1st number:\n");
    scanf("%d",&num1);

    printf("input 2nd number:\n");
    scanf("%d",&num2);

    sum = num1 + num2;
    dif = num1 - num2;
    pro = num1 * num2;
    quo = num1 / num2;

    printf("和:%d\n",sum);
    printf("差%d\n",dif);
    printf("積:%d\n",pro);
    printf("商:%d\n",quo);

    return 0;


}
