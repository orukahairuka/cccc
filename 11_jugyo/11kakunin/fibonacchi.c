/*
    Sakurai Erika
    2353702
    フィボナッチ数列の漸化式
    fibonacchi.c
*/
#include <stdio.h>

int main(){

    int a0;//初項
    int i;
    int ai[20];
    
    ai[0] = 1;
    ai[1] = 1;

    printf("%d\n",ai[0]);
    printf("%d\n",ai[1]);
    for(i = 2;i < 20; i++){

        
        ai[i] = ai[i-1] + ai[i-2];
        printf("%d\n",ai[i]);
    }
    return 0;
}
