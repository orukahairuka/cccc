#include <stdio.h>
#include<handy.h>
#include <stdlib.h>




/*int main(){
    int x = 0;
    int y = 0;
    int random;
    int ame[50];
    int ame2[50];
    int i;
    int j;

    HgOpen(600,400);




    for(;;){
        x += 1;
        y += 1;
        random = rand();
        for(i = 0; i < 50; i++){
            ame[i] = random % 4;
            ame2[i] = random % 4;
        }
        HgClear();
        
        HgLine(ame2[i]-15*ame[i],ame2[i]-15*ame[i],
        (ame2[i]-50)-15*ame[i],(ame2[i]-50)-15*ame[i]);

        HgLine(200-5*x,300-5*x,150-5*x,250-5*y);
        HgLine(700-4*x,700-4*x,650-4*x,650-4*y);
        j++;
        HgLine(300-4*x,300-4*x,250-4*x,250-4*y);
        
        HgSleep(0.05);
    }
    HgGetChar();
    HgClose();
}
*/


/*****
    random.c
    乱数を10個発生させてみる
    M.Minakuchi
*****/
#include <stdio.h>
#include <stdlib.h>  // rand関数を使うために必要

int main() {
    int i;
    int random;
    int result[10] ;
    int result2[10] ;
    int total = 0;
    int ame[50] ;
    int ame2[8] = {100,200,300,400,500,600,700,800};
    HgOpen(600,400);

    for (i = 0; i < 1000; i++) {
        HgClear();
        random = rand();  // 乱数を得る
        result[i] = random % 20;
        result2[i] = random % 20;
        ame[i] = random % 6;
        ame[i] ++;
        
        
        result2[i]++;
        result[i] ++;
        total = result[i] + result2[i];
        HgLine(ame2[0]-1*ame[i],600-15*ame[i],
        ame2[0]-1*ame[i],500-15*ame[i]);

        HgLine(ame2[1]-1*ame[i],400-15*ame[i],
        ame2[1]-1*ame[i],300-15*ame[i]);

        HgLine(ame2[2]-1*ame[i],500-15*ame[i],
        ame2[2]-1*ame[i],400-15*ame[i]);

        /*HgLine(700-15*ame[i],300-15*ame[i],
        650-15*ame[i],250-15*ame[i]);

        HgLine(800-15*ame[i],300-15*ame[i],
        750-15*ame[i],250-15*ame[i]);

        HgLine(400-15*ame[i],300-15*ame[i],
        350-15*ame[i],250-15*ame[i]);

        HgLine(500-15*ame[i],300-15*ame[i],
        450-15*ame[i],250-15*ame[i]);
        */


        printf("サイコロの目の合計は%d\n",total);
        printf("ame!!!%D\n",ame[i]);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}
