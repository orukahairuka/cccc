/*{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される
大きさ10の整数型配列を宣言し、
最初は参照する要素番号を0とし、
この参照する要素番号A!の配列要素の値B!を表示し、
次にその配列要素の値B!を次の参照する要素番号C!とし、
この次の参照する要素番号D!の配列要素の値を表示し、
さらにその配列要素の値を次の参照する要素番号とし
、……を10回繰り返すプログラムを作成せよ。（具体的にどのような手順かは実行例を見て考えよう。）*/

#include <stdio.h>

int main() {
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int i;
    int index;

    index = array[0];

    for (i = 1; i <= 10; i++) {
        printf("%d\n", index);
        index = array[index];
    }
    return 0;
}
