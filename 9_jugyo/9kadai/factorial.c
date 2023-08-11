/*
Sakurai Erika
2353702
factorial.c
入力した値の階条を求める
0以下の時は再度入力させる
*/

/*考察理由
int 型はサイズが4バイトであり、-214783648~2147483647
前の値しか表示できないから。
13! = 6,227,020,800 となり、数が大きくなり過ぎてしまうため。
*/

#include <stdio.h>

int main(){
    int num;//入力された数
    int i = 1;
    int total = 1;

    do{
    printf("input number:");
    scanf("%d",&num);
    }while(num <= 0);

    for(i = 1;i <= num;i++){
        total *= i;

    }

    printf("%d\n",total);

    


    

}
