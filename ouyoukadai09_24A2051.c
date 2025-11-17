#include <stdio.h>

void sum(int max_num) {
    int output = 0;

    for (int i = 1; i <= max_num; i++) {

        output += i; 

        printf("1から%dまでの全ての値を足した合計値は%dです。\n", i, output);
    }
}

int main(void) {
    int input; // ユーザーが入力

    printf("1からキー入力した数字（整数）までを足した「合計値」を求めるプログラムです。\n");
    printf("いくつまでの数値の計算値を求めますか？\n");
    printf("1から10までの数字（整数）をキー入力してください。\n");

    scanf("%d", &input);

    sum(input);

    return 0; // !!!!!!終了!!!!!!!
}