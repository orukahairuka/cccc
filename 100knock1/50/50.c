#include <stdio.h>

int main() {
    int fig = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        if ((i % 3 == 0) && (i % 5 != 0)) {
            printf("foo\n");
        }else if ((i % 5 == 0) && (i % 3 != 0)) {
            printf("bar\n");
        }else if((i % 5 == 0)&&(i % 3 == 0)){
            printf("foobar\n");
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}
