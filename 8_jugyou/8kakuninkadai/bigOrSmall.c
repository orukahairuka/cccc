/***
 * 数の大小の判断をする
 * Sakurai Erila
 * 2353702
 * 
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("1つ目の値を入れて下さい。\n");
    scanf("%d",&num1);

    printf("2つ目の値を入れて下さい。\n");
    scanf("%d",&num2);

    if(num1 > num2)printf("%dは%dより大きい\n",num1,num2);
    if(num1 < num2)printf("%dは%dより小さい\n",num1,num2);
    if(num1 == num2)printf("%dと%dは等しい\n",num1,num2);

    return 0;

}
