#include <stdio.h>
/*人桁の整数かそうじゃないかの判断*/

int main(){
    int inNum;
    printf("input number:");
    scanf("%d",&inNum);
    
    if(inNum < 10 && 0 < inNum){
        printf("%d is a single figure\n", inNum);
    }else{
        printf("%d is not a single figure\n", inNum);
    }
    return 0;
}
