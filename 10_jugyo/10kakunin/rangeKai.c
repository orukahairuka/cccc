/*
    Sakurai Erika
    2353702
    rangeKai.c
    二つの整数を入力させる。
    その二つの値の整数の範囲内である限り入力を繰り返す。
*/

#include <stdio.h>

int main(){
    int inNum1;
    int inNum2;
    int max;
    int min;
    int num;
    
    printf("一つ目の範囲内値：");
    scanf("%d",&inNum1);

    printf("二つ目の範囲内値：");
    scanf("%d",&inNum2);

    if(inNum1>inNum2){
        max = inNum1;
        min = inNum2;
    }else{
        max = inNum2;
        min = inNum1;
    }

    for(;;){

        printf("判定値：");
        scanf("%d",&num);
        
        if(min > num||num > max){
            printf("終了します。\n");
            return 0;
        }else{
            continue;
        }
    }

return 0;
    
}
