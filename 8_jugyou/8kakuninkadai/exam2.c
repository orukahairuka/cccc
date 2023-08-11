/***
 * 成績評価
 * Sakurai Erika
 * 2353702
 * 
*/

#include <stdio.h>

int main(){

    int score;

    printf("点数を入力して下さい。\n");
    scanf("%d",&score);

    if(score >= 90){
        printf("秀\n");
    }else if(score >= 80){
        printf("優\n");
    }else if(score >= 70){
        printf("良\n");
    }else if(score >= 60){
        printf("可\n");
    }else{
        printf("不可\n");
    }
    return 0;
    
}
