/*****
 * treasure.c
 * 宝箱を開けてみる
 * Sakurai Erika
 * 
*/

#include <stdio.h>

int main(){

    int box;//選んだ宝箱の番号

    printf("宝箱が3つある!どれを開けますか?(1か2か3):");
    scanf("%d",&box);

    if (box == 1) printf("宝箱は罠だった\n");

    return 0;


}
