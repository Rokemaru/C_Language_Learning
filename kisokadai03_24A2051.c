#include <stdio.h>

int main(void)
{
    // 24A2051_久冨木慧
    printf("私は%s_%sです。\n", "24A2051", "久冨木慧");

    // int型の変数 num1 と num2 を宣言
    int num = 0;

    // num1 に 3 を代入して、表示
    num = 3;
    printf("変数numの値は%dです。\n", num);

    // num2 に num1 の値を代入して、表示
	num = 5;
    printf("変数numの値を変更しました。\n");
    printf("変数numの値は%dです。\n", num);

    return 0;
}