/*整数値を入力させ、1から9まで、
入力値以外を表示するプログラムを作成せよ。*/

#include <stdio.h>

int main(){
    int i;
    int num;

    printf("input number:");
    scanf("%d",&num);

    for(i = 1; i <= 9; i++){
        if(i == num){
            continue;
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}
