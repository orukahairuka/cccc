/*****
      変数の計算
      練習

*/

#include<stdio.h>
#include<handy.h>

int main(){
    HgOpen (600,480);
    HgBox((600-114*2)*(1.0/6),(480-114)*(2/3.0),114,114);
    HgBox((600-114*2)*(3.0/6)+114,(480-114)*(2/3.0),114,114);
    
    
    HgGetChar();
    HgClose();
    return 0;

    
}
