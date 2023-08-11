#include <stdio.h>

int main(){
    int inNum = 0;

    printf("input number:");
    scanf("%d",&inNum);

    if(inNum % 2 == 0){
        printf("%d is even\n",inNum);
    }else{
        printf("%d is odd\n",inNum);
    }

    return 0;
}
