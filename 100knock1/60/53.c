#include <stdio.h>

int main(){
    int inNum;
    int i;
    int PrimeNum = 0;
    int fig = 2;

    printf("input number:");
    scanf("%d",&inNum);
    
    while(inNum > 0){
        if(inNum % fig == 0){
            inNum = inNum / fig;
            printf("%d\n",fig);
        }else{
            fig++;
        }
    }
    return 0;
}
