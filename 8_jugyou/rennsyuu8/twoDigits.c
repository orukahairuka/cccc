#include <stdio.h>

int main(){
    
    int X;


    printf("数を入力して下さい\n");
    scanf("%d",&X);

    if(10 <= X){   
                  //10以上の真である状態
       if(X<100){           //100未満かどうか
         printf("%dは普通\n",X);
         
        }else{
            printf("%dはとても大きい\n",X);
        }


    }else{
        printf("%dは一番小さい\n",X);
    }

    return 0;
}
