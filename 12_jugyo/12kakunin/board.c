/*
    Sakurai Erika
    2353702
    board.c
    配列の初期化、表示には繰り返し処理を使う
    必ず２次元配列に値を格納する
*/
#include <stdio.h>

int main(){

    int bnum[9][9] = {};
    int j;
    int i;
    

    for(i = 0; i <= 8; i++){
        for(j = 0; j <= 8; j++){
            if(i ==j){
                printf("%d",1);
            }else{
                printf("%d",bnum[i][j]);
            }         
        }
        printf("\n");
    }
}
