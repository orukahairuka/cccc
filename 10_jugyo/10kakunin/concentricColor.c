#include <stdio.h>
#include <handy.h>

int main(){

    int i = 0;
    int r = 0;

    
    HgOpen(600,600);
    
    for(i = 1;i <= 5; i++){

        r = i * 50;
        if(i % 2 == 1){     //奇数の時
        HgSetColor(HG_BLUE);    
        }else{              //偶数の時
        HgSetColor(HG_RED);
        }

        HgCircle(300,300,r);

        
    }

    HgGetChar();
    HgClose();
    return 0;

}
