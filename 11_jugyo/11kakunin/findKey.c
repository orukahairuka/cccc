#include <stdio.h>

int main() {
    int id[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int key[10] = {114, 194, 223, 315, 326, 404, 514, 634, 777, 819};
    int inputID;
    int i;
    int found = 0;

    while (1) {
        printf("IDを入力してください（終了するには0を入力）: ");
        scanf("%d", &inputID);

        if (inputID == 0) {
            printf("プログラムを終了します。\n");
            break;
        }

        found = 0;
        for (i = 0; i < 10; i++) {
            if (inputID == id[i]) {
                printf("ID %d の鍵の番号は %d です。\n", inputID, key[i]);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("そのIDの人は存在しません。\n");
        }
    }

    return 0;
}
