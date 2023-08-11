#include <stdio.h>

int main(){

    int height[5] = {163,157,176,180,166};
    int num1;

    printf("番号？ ");
    scanf("%d",&num1);

    printf("%d番目の身長は%dです。\n",num1,height[num1]);

    return 0;
}
