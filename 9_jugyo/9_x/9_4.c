/*****
 * 9_3.cの内容をdo while関数を使ってかく
*/

#include <stdio.h>

int main(void){

    int box;

    do{
        printf("宝箱が3つある。どれを開けますか?\n");
        scanf("%d",&box);
   
        if(box ==1){
            printf("宝箱は罠だった。\n");
        }
    }while(box <= 0 || 3 <box);

    return 0;
    
}
