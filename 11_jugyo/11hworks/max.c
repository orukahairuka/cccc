/*
    Sakurai Erika
    2353702
    max.c
    要素数100の正数型の配列を用意
    次にデータの個数を入力
    このデータの個数だけ整数値を入力させる。
    そしてその中から最大値を探す
*/
#include <stdio.h>

int main(){

    int i;
    int j;
    int fig[100];
    int num = 0;
    int large = 0;
    int l;

    printf("input number of data: ");
    scanf("%d",&num);

    for(i = 0; i < num; i++){
        printf("input No.%d data: ",i + 1);
        scanf("%d",&fig[i]);
    }

    large = fig[0];
    for(j = 1;j < num - 1; j++){
        if(fig[j] > large){
            large = fig[j];
        }    
        }
    printf("最大値：%d\n",large);
    return 0;
}
