/*
    Sakurai Erika
    2353702
    passCheck.c
    合格点を入力すると合格点以上となる人数を表示する
*/

#include <stdio.h>

int main(){

    int score[10] = {66,98,56,48,73,35,87,60,52,65};
    int num;
    int i;
    int total = 0;

    printf("合格点: ");
    scanf("%d",&num);

    for(i = 0; i < 10; i++){//10個のそれぞれが真か偽かで繰り返して判断する
        if(score[i] >= num){
            total++;
        }else{
            continue;
        }
    }

    printf("合格者は%d人\n",total);

    return 0;

}
