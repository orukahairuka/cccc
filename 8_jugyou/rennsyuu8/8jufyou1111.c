/*****
 * treasure.c
 * 宝箱を開けてみる
 * Sakurai Erika
 * コマンドkでインデントを入れ直してくれる
*/

#include <stdio.h>

int main(){

    int box;//選んだ宝箱の番号

    printf("宝箱が3つある!どれを開けますか?(1か2か3):");
    scanf("%d",&box);

    if(box ==1){

        printf("宝は罠だった");
        printf("敵が現れた");
    } else{
        printf("あなたは宝を手に入れた");
    } 



    return 0;


}
