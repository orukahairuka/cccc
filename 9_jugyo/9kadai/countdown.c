/*
Sakurai Erika
2353702
入力された値から1まで、1ずつ減らして表示するプログラム
countdown.c
*/

#include <stdio.h>

int main(){

    int number = 0;
    int i =0;
    

    printf("input number:\n");
    scanf("%d",&number);

    for(i = number - 1;i >=1;i--){
        
        
        
        printf("%d\n",i);
        

    }

    
    return 0;
}
