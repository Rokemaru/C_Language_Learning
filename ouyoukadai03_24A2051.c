#include <stdio.h>

int main(void)
{
    // 湿度50を格納する変数を用意
    int humidity = 50;

    // 気温を格納する変数を用意
    double temperature = 0.0;

    // 今の湿度を表示
    printf("今の湿度は%d%%です。\n", humidity);

    // この文章をそのまま表示
    printf("今の気温(小数第1位まで)を入力してください。\n");

    // キーボードから小数を入力、変数temperatureに格納
    scanf("%lf", &temperature);

    // 入力された気温を、小数点以下1桁で表示
    printf("今の気温は %.1f℃ですね。\n", temperature);

    printf("熱中症に気をつけましょう！\n");

    return 0;
}