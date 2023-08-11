#include <stdio.h>

int main(){
    
    int score;

    printf("点数を入力して下さい\n");
    scanf("%d",&score);

    if(score <= 60){
       printf("不可\n");
    } else if(score <= 80){
        printf("可\n");
    } else{
        printf("優\n");
    }

return 0;
}
