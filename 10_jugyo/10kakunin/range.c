/*
    Sakurai Erika
    2353702
    range.c
    最小値と最大値を大きい順に入力させ範囲を作る。
    そして別の値を入力。
    それが範囲内にあればまた入力を繰り返す。
*/

#include <stdio.h>

int main(){

    int max = 0;
    int min = 0;
    int num = 0;

    printf("最小値を入力して下さい。\n");
    scanf("%d",&min);

    printf("最大値を入力して下さい。\n");
    scanf("%d",&max);

    for(;;){

        printf("数を入力して下さい。\n");
        scanf("%d",&num);

        if(min > num || num > max){
            printf("範囲外なので終了します\n");
            return 0;
        }else{
            continue; 
        }
    }

    return 0;
}
