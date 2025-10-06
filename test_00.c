#include <stdio.h>

int main(void)
{
    // int型の変数numを0で初期化
    int num = 0;

    // ナムに今回使用する値を代入
    num = 3;

    // printfで変数の値を表示
    printf("変数numの値は%dです。\n", num);

	//　変数numにさらに値を代入
    num = 5;

	// 変数numの値を変更したことを表示
    printf("変数numの値を変更しました。\n");

	// 変更後の変数numの値を表示
    printf("変数numの値は%dです。\n", num);

    return 0;
}