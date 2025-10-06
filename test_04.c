#include <stdio.h>

int main(void)
{
    // 文字を格納するための変数を用意
    char greeting[] = " ";

    // ユーザー入力
    printf("好きな文字を1つ入力してください: ");

    // 文字を1つ入力してもらう
    scanf(" %c", &greeting);

    // 入力された文字を表示する
    printf("あなたが入力した文字は '%c' ですね！\n", greeting);

    return 0;
}