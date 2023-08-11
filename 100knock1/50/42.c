#include <stdio.h>

int main(){
    int inNum1;
    int inNum2;
    int inNum3;

    printf("input number 1:");
    scanf("%d",&inNum1);

    printf("input number 2:");
    scanf("%d",&inNum2);

    printf("input number 3:");
    scanf("%d",&inNum3);

    if(inNum1 <= inNum2 && inNum2 <= inNum3){
        printf("OK\n");
    }else{
        printf("NG\n");

    }

    return 0;
}

