/***
 * weight.c
 * 体重を計算する
 * Sakurai Erika
 * 2353702
*/


#include <stdio.h>

int main (){

    int weight;//体重
    int high;//身長
    int stwight;//標準体重
    int maxstwight;//標準体重の一割増
    int minstwight;//標準体重の一割減
    
    
    printf("体重を入力して下さい。\n");
    scanf("%d",&weight);

    printf("身長を入力して下さい。\n");
    scanf("%d",&high);

    stwight = high - 105;
    maxstwight = stwight * 110 / 100;
    minstwight = stwight * 90 / 100;

    
    

    if(maxstwight > weight){
       
        if(minstwight < weight){
            printf("標準です。\n");
        }else{
            printf("痩せすぎです。\n");
        }
        
    }else{
        printf("太り過ぎです。\n");
    }


        return 0;


    


}
