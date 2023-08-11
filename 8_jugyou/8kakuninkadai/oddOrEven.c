/***
 * oddOrEven.c
 * Sakurai Erika 
 * 2353702
 * 奇数になる時oddと表示する
 * 偶数になる時evenと表示する
 * 
*/


#include <stdio.h>

int main (){
    
    int num1;

    printf("数を入れて下さい。\n");
    scanf("%d",&num1);

    if(num1 % 2 ==1 ){
        printf("odd\n");

    }else{
        printf("even\n");
    }



    return 0;
}
