#include <stdio.h>

int main(void)
{
    // int型の変数 num1 と num2 を宣言
    int num1 = 0;
    int num2 = 0;

    // num1 に 3 を代入して、表示
    num1 = 3;
    printf("変数num1の値は%dです。\n", num1);

    // num2 に num1 の値を代入して、表示
    num2 = num1;
    printf("変数num1の値をnum2に代入しました。\n");
    printf("変数num2の値は%dです。\n", num2);

    return 0;
}