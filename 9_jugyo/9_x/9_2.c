#include <stdio.h>//while関数を使って5回までHello World!を表示する

int main(){


int number = 0;//numberはカウンタ変数という

while (number < 5)
{
    printf("Hello World!\n");
    number += 1;
}


return 0;


}
