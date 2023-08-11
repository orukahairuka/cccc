#include <stdio.h>

int main(void){
    int number;
    int i = 0;
    int total = 0;

    printf("input number:\n");
    scanf("%d",&number);

    for(i = 0; i <= number && number > 0; i++){
        
        total += i;
        
    } 

    printf("%d\n",total);

    return 0;

    
}
