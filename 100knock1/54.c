/*
この入力データの中で
最大値と最小値を求め表示するプログラムを作成せよ
*/
#include <stdio.h>



    int max = 0;
int main(){
    for(i = 0; i < numData - 1 ; i++){
        if(data[i] < data[i+1]){
            max = data[i+1];
        }
    }
}
