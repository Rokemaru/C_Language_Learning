#include <stdio.h>

int main(void)
{
    // double型の変数 f_num1 と f_num2 を宣言
    double f_num1 = 0.0;
    double f_num2 = 0.0;

    // f_num1 に 3.14 を代入して、表示
    f_num1 = 3.14;
    printf("変数f_num1の値は%.2fです。\n", f_num1);

    // f_num2 に f_num1 の値を代入して、表示
    f_num2 = f_num1;
    printf("変数num1の値をnum2に代入しました。\n");
    printf("変数f_num2の値は%.2fです。\n", f_num2);

    return 0;
}