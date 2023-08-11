//sample実行しない方がいい


#include <stdio.h>

int main(){
    loop: // <- goto loop;から戻ってくる場所を指定するためのラベル
    printf("Hello World!\n");

    goto loop; // loop: にもどる　->
    
    return 0;//ここには到達しない

}
