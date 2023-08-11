/*
    Sakurai Erika
    2353702
    averageArray.c
*/

#include <stdio.h>

int main(){

    int i;
    int num;
    int j;
    int fig[5];
    int total = 0;
    int average;

    printf("input number of data: \n");
    scanf("%d",&num);//numを入力する

    for(i = 0; i < num; i++){
        printf("input No.%d\n",i);
        scanf("%d",&fig[i]);
    }

    for(j = 0; j < num; j++){
       total += fig[j];
    }
    average = total / num;
    printf("average = %d\n",average);
    return 0;
}
