#include<stdio.h>

int main(){

 int a0;
 int ax;
 int ax1;  
 int num[15];
 int i;

 for(i = 1; i < 15; i++){
    num[0] = 9565937;
    
    ax1 = num[i-1] - 2;

    num[i] = ax1 / 3;
    
    
    printf("%d\n",num[i-1]);
    

 }
 printf("%d\n",num[14]);

 return 0;
}
