#include <stdio.h>

int main() {
    int number;

    printf("整数を入力してください。\n");

    // scanfには &number を渡す
    scanf("%d", &number);

    // 読み取った数値が1か
    if (number == 1) {
        // 等しい
        printf("1が入力されました。\n");
    }
    else {
        // 等しくない
        printf("1以外が入力されました。\n");
    }
    return 0;
}