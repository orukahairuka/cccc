/*整数値を入力させ、
1から9まで、入力値と入力値+1以外を表示するプログラムを作成せよ。入力値が
9の場合は9のみ表示しない。
*/

#include <stdio.h>

int main(){
    int i;
    int num;

    printf("input number:");
    scanf("%d",&num);
    
    for(i = 1; i <= 9; i++){
        if(num == i){
            continue;
        }else if(num+1 == i){
            continue;
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}
