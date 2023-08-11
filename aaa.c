#include <stdio.h>

int main(){
    int start;
    int end;
    int i;

    printf("start: ");
    scanf("%d", & start);
    printf("end: ");
    scanf("%d",&end);

    for(i= start; i >= end; i--){
        printf("%d\n",i);
        
    }
    return 0;
}

