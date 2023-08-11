#include <stdio.h>

int i;
int number;
int total = 1;

int main(){

    printf("input number: ");
    scanf("%d",&number);

    printf("%d\n",total);

    for(i = 0; i < number - 1; i++){
       total = 3 * total + 2;
       printf("%d\n",total);
    }

    return 0;
}
