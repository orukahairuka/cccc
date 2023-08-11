#include <stdio.h>

int main(){

    int num1;
    printf("input number:");
    scanf("%d",&num1);

    if(num1 == 0){
        printf("zero\n");
    }else{
        printf("not zero\n");
    }

    return 0;
}
