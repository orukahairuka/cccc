#include <stdio.h>

int main(){

    int num;
    
    printf("input number:\n");
    scanf("%d",&num);

    if(num < 0){
        num *= -1;
        printf("absolute value is %d\n",num);
    }

    return 0;
}
