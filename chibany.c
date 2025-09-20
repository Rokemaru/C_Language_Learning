// main.c や chibany.c など、main関数があるファイル

#include <stdlib.h>
#include <windows.h>
#include "chibany.h" // チバニーの設計図を読み込む！

int main(void)
{
    for (int i = 0; i < 40; i++) {

        system("cls");

        // チバニーを描く専門家（draw_chibany）を呼び出す！
        // 「i」の位置に描いてね、とお願いしている
        draw_chibany(i);

        Sleep(150);
    }

    return 0;
}