/***
 * fruits.c
 * Sakurai Erika
 * 2353702
 * 
*/

#include <stdio.h>

int main(){

    int num1;

    printf("整数値を入れて下さい。\n");
    scanf("%d",&num1);

    if(num1 % 3 == 1)printf("apple\n");
    if(num1 % 3 == 2)printf("orange\n");
    if(num1 % 3 == 0)printf("banana\n");

    return 0;
}
