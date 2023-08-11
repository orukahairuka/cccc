#include<stdio.h>

int main(){

    int number;
    int i = 0;

    printf("何回繰り返したいですか？");
    scanf("%d",&number);
    
    for(i = 0; i < number; i++){
        if(number > 0){
            

            printf("%d",i);

            break;
        }

        printf("また入力して下さい。\n");
    }

    printf("あなたの入れた数は%dです。\n",number);

    return 0;
}
