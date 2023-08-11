/*
    Sakurai Erika 
    2353702
    fizz.c
    3の倍数だけfizzと表示させる。

*/

#include <stdio.h>

int main(){

    int number = 0;
    int i = 0;

    printf("いくつまで表示させますか。");
    scanf("%d",&number);

    for(i = 1; i <= number; i++){
        if(i%3==0){
            printf("fizz\n");
        }else{
            printf("%d\n",i);
        }


    }

    return 0;
}
