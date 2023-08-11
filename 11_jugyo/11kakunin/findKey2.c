#include <stdio.h>

int main(){
    int id[10] = {2,3,5,7,11,13,17,19,23,29};
    int key[10] = {114,194,223,315,326,404,514,634,777,819};
    int i = 0;
    int num;

    printf("IDを入力してください:");
    scanf("%d",&num);

    for(i = 0; i < 10; i++){
        if(id[i]==num){
            printf("%dの鍵の番号は%dです。\n",id[i],key[i]);
        }else{
            printf("IDが見つかりません。\n");
            break;
        }
    }

    return 0;

}
