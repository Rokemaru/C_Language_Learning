#include <stdio.h>

int main(void) {
    int nam1 = 10;  // 足したい数値（好きな値に変えられます）
    int sum = 0;    // 合計を保存する変数
    int i;

    // forループを使って3回繰り返す
    for (i = 0; i < 3; i++) {
        sum = sum + nam1; // sumにnam1を足していく
        // sum += nam1; と書くこともできます
        printf("%d回目の加算後の合計: %d\n", i + 1, sum);
    }

    printf("-------------\n");
    printf("最終的な合計は %d です。\n", sum);

    return 0;
}