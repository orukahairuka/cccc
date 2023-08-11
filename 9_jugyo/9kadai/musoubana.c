/***
 * * musoubana.c
 * Sakurai Erika
 * 2353702
 * とんでを9回、まわってを3回繰り返す
*/

#include <stdio.h>

int main(void){

    int T = 0;
    int M = 0;

    while(T < 9){
        printf("とんで");
        T++;
    }

    printf("\n");

    while(M < 3){
        printf("まわって");
        M++;
    }
    printf("まわる\n");

    return 0;

}
