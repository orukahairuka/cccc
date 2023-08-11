/*
    gridcirclesの色をつけたもの
    Sakurai Erika
    2353702
    gridCirclesWB.c
*/

#include <stdio.h>
#include <handy.h>

int main(){

    int x;
    int y;
    int r;
    int num;
    int i;
    int j;

    printf("幾つですか？");
    scanf("%d",&num);

    r = 240 / num;
    
    HgOpen(480,480);

    for(i = 0;i < num; i++){
        y = r + 2 * r * i;

        for(j = 0;j < num; j++){
            x = r + 2 * r * j;
            
            if(j % 2 == 1){
                HgSetFillColor(HG_BLACK);
                HgCircleFill(x,y,r,1);   
            }else{
                HgCircle(x,y,r);  
            }
        }   
    }
    HgGetChar();
    HgClose();

}
