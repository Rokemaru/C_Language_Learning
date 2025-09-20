// chibany_drawer.c

#include <stdio.h>
#include "chibany.h" // 自分たちで作った設計図を読み込む

// 設計図で約束した機能の、具体的な処理内容
void draw_chibany(int position)
{
    // チバニーを少し下に表示させるための改行
    printf("\n\n\n\n");

    // チバニーを右に動かす (positionの数だけスペースを挿入)
    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(\\__/)\n");

    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(^.^ ) < hop!\n");

    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(\")_(\")\n");
}