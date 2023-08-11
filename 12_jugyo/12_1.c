#include <stdio.h>

int main(){

    int sum; //個人合計
    int ave; //個人平均
    int i; //カウンタ変数
    int NUM_CLASS = 50;
    int eng[50];
    int lang[50];
    int math[50];

    

    for(i = 0; i < NUM_CLASS; i++){
        sum = eng[i] + lang[i] + math[i];
        ave = sum / 3;
        printf("%d番：合計%d 平均%d\n",i,sum,ave);
    }

    return 0;
}
