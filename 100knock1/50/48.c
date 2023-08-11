#include <stdio.h>

int main(){
    int inNum = 0;
    int total = 0;

    printf("input number:");
    scanf("%d",&total);

    while(1){
        if(total % 2 == 0  && total != 1){//inNumが偶数の時
            total = total / 2;
            printf("%d\n",total);
        }else if(total % 2 == 1 && total != 1){//inNumが奇数の時
            total = total * 3 + 1;
            printf("%d\n",total);
        }else if(total == 1){
            return 0;
        }
    }
    return 0;
}
