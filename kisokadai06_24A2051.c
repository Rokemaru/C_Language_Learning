#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    int i;

    printf("1からキー入力した数字（整数）までを足した合計値を求めるプログラムです。\n");

    printf("いくつまでの合計を求めますか？\n");

    printf("整数をキー入力してください。\n");

    scanf_s("%d", &num);

    for (i = 1; i <= num; i++) {
        sum = sum + i;
    }

    printf("1から%dまでの合計は%dです。\n", num, sum);

    return 0;
}