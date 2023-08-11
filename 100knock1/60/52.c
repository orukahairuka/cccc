#include <stdio.h>

int main(){
    int year = 0;

    printf("input number:");
    scanf("%d",&year);

    if(year % 4 == 0){
        if((year % 400 == 0) || (year % 100 != 0)){
            printf("閏年です\n");
        }else{
            printf("閏年ではない\n");
        }
    }else{
        printf("閏年でない\n");
    }
    return 0;
}
