#include <stdio.h>

int main(){
int box;

    printf("番号を入れて下さい。\n");
    scanf("%d",&box);
    switch(box) {
        case 1:
            printf("宝は罠だった。\n");
            printf("敵が現れた。\n");
            break;
        case 2:
            printf("あなたは宝を手に入れた。\n");
            break;
        case 3:
            printf("宝は空っぽだった。\n");
            break;
        default:
            //何もしない
            break;
    }
    return 0;

}
