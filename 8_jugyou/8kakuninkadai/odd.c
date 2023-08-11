/***
 * odd.c
 * Sakurai Erika 
 * 2353702
 * 奇数になる時oddと表示する
 * 
*/


#include <stdio.h>

int main (){
    
    int num1;

    printf("数を入れて下さい。\n");
    scanf("%d",&num1);

    if(num1 % 2 ==1 ){
        printf("odd\n");

    }

    return 0;
}
