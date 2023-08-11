#include <stdio.h>

int main(){

    int height[5] = {163,157,176,180,166};
    int stnum;
    int i;


    printf("学生番号？ ");
    scanf("%d",&stnum);

    i = stnum - 54400;

    if(-1 > i || 5 < i){
    
    
    }else{
         printf("%d番目の身長は%dです。\n",i+1,height[i]);
    }
    return 0;
}
