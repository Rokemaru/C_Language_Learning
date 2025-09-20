#include <stdio.h>
#include <stdlib.h>  // system("cls") を使うために必要
#include <windows.h> // Sleep() を使うために必要

int main(void)
{
    // アニメーションを40コマ (iが0から39まで) 繰り返します
    for (int i = 0; i < 40; i++) {

        // 1. 画面をまっさらにする
        system("cls");

        // チバニーを少し下に表示させるための改行
        printf("\n\n\n\n");

        // 2. チバニーを右に動かす (iの数だけスペースを挿入)
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // 3. チバニーを描画する
        printf("(\\__/)\n");

        // 2回目のスペース挿入 (2行目も同じだけ右にずらす)
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("(^.^ ) < hop!\n"); // ジャンプしている感じの顔文字にしてみました

        // 3回目のスペース挿入
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("(\")_(\")\n");

        // 4. 0.15秒だけ待つ (アニメーションの速度)
        Sleep(150);
    }

    printf("\n\n\n"); // 最後に少し間をあける

    return 0;
}