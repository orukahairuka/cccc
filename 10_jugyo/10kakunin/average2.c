/*
    Sakurai Erika
    2353702
    average2.c
    整数値を入力。入力が0の時それまでの入力値の平均を表示して終了させる
*/

#include <stdio.h>

int main(){
    int i = 0;
    int average = 0;
    int number = 0;
    int sum = 0;

    for(;;){

        scanf("%d",&number);
        if(number ==0){
            average = sum / i;
            
            printf("今までの平均は%dです。\n",average);

            return 0;
            
        }
        sum += number;
        i++;
    }

    return 0;


}
