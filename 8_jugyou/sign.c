/****
 * sign1.c
 * Sakurai Erika
 * 
 * 
*/

#include <stdio.h>

int main(){

    int num;

    printf("整数値を入れて下さい\n");
    scanf("%d",&num);

    if(num > 0) printf("プラスです\n");
    if(num == 0) printf("ゼロです\n");
    if(num < 0) printf("マイナスです\n");
    
}
