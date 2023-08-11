#include <stdio.h>

int main(){
    int inMoney;
    int doll;
    int calc;
    int flow;

    printf("何円？");
    scanf("%d",&inMoney);
    printf("1ドルは何円？");
    scanf("%d",&doll);
    
    calc = inMoney / doll;
    flow = inMoney % doll;

    printf("%d円は%dドル%dセント\n",inMoney, calc,flow);
    return 0;

}
