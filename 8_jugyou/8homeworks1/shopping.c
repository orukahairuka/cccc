/***
 * shopping.c
 * Sakurai Erika
 * 2353702
 * 
*/

#include <stdio.h>

int main(){

    int money;
    int one_money;
    int quantity;
    int x;
    int mod;


    printf("手持ち金額を入力して下さい。\n");
    scanf("%d",&money);

    printf("単価を入力して下さい。\n");
    scanf("%d",&one_money);

    printf("個数を入力して下さい。\n");
    scanf("%d",&quantity);

    
    mod = money - (one_money * quantity);
    
    x = money / one_money;

    if(money >= one_money * quantity){

        printf("買えます。お釣りは%d円です。\n",mod);
    }else{
        printf("買えません。%d個まで変えます。\n",x);



    }
    return 0;

}
