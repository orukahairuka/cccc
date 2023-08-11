#include <stdio.h>

int main(){
    int num[10] = {3,7,0,8,4,1,9,6,5,2};
    int index1;
    int index2;
    int total = 0;

    printf("input index1:");
    scanf("%d",&index1);
    printf("input index2:");
    scanf("%d",&index2);

    total = num[index1] * num[index2];
    printf("%d*%d = %d\n",num[index1],num[index2],total);
    return 0;
}
