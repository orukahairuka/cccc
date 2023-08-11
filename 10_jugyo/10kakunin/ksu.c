/*
    Sakurai Erika
    2353702
    ksu.c
    整数値を入力して入力した回数だけ縦横にksuを繰り返す
*/
#include <stdio.h>

int main(){

    int num1;
    int i;
    int j;

    
    printf("回数を入力して下さい：");
    scanf("%d",&num1);
    
    for(i = 1;i <= num1; i++){
        for(j = 1;j <= num1; j++){
        printf("KSU ");
        }
        printf("\n");
    }
    

     return 0;

}
