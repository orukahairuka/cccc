/*
one.c
Sakurai Erika
2353702
二つの整数か1で一致した時one!!と表示させる
*/

#include <stdio.h>

int main(){

    int num1;
    int num2;

    printf("1つ目の整数を入れて下さい。\n");
    scanf("%d",&num1);

    printf("2つ目の整数を入れて下さい。\n");
    scanf("%d",&num2);

    if(num1 == num2 == 1)printf("one!!\n");

    return 0;
    

}
