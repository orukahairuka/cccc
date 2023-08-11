#include <stdio.h>

int main(){
    int inMoney = 0;
    int hundred = 0;
    int ten = 0;
    int one = 0;

    printf("input money:");
    scanf("%d",&inMoney);

    hundred = inMoney / 100;
    ten = (inMoney % 100) / 10;
    one = (inMoney % 100) % 10;

    printf("100円玉%d枚、10円玉%d枚、1円玉%d枚\n",hundred,ten,one);
    return 0;

}
