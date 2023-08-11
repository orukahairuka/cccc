

#include <stdio.h>

int main() {
    int numData;
    int data[100];
    int i, j;
    int max = 0;
    int min = 0;

    scanf("%d", &numData);

    for (i = 0; i < numData; i++) {
        scanf("%d", &data[i]);
    }

    printf("numData = %d\n", numData);
    for (i = 0; i < numData; i++) {
        printf("%d\n", data[i]);
    }
    max = data[0];
    min = data[0];

    for(i= 0; i < numData; i++){
        if(data[i] > max){
            max = data[i];
        }
        if(data[i] < min){
            min = data[i];
        }
    }
    printf("最大値= %d\n", max);
    printf("最小値=%d\n",min);
    return 0;
}
