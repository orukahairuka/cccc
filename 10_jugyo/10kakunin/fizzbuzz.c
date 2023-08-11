/*
    Sakurai Erika
    2353702
    fizzbuzz.c
    入力する値まで数を表示する。3の倍数の時fizz
    5の倍数の時buzzと表示させる。
*/

#include <stdio.h>

int main(){

    int i;
    int number;
    int multi;

    printf("数を入力して下さい：");
    scanf("%d",&number);

    for(i = 1;i <= number;i++){
        if(i % 3 == 0){
            printf("fizz\n");
        }else if( i % 5 == 0){
            printf("buzz\n");
        }else{
            printf("%d\n",i);
        }       
    }

    return 0;
}
