/*
    Sakurai Erika
    2353702
    average.c
    
*/

#include <stdio.h>

int main(void){
    int num1;
    int num2;
    int num3;
    int num4;


    printf("1st number\n");
    scanf("%d",&num1);

    printf("2nd number\n");
    scanf("%d",&num2);

    printf("3rd number\n");
    scanf("%d",&num3);

    num4 = ( num1 + num2 + num3)/3;

    printf("average=%d\n",num4);
    
    return 0;

}
