#include <stdio.h>

int main(void) {
    int score = 0;

    printf("あなたのテストの点数を入力してください。\n");

    /* 入力が正しく読み取れたか確認する。ちがったらエラー文を出す。 */
    if (scanf("%d", &score) != 1) {
        printf("入力エラーが発生しました。\n");
        return 1;
    }

    /* 範囲ごとの場合分けをする。 */
    if (score >= 90 && score <= 100) {
        printf("とても素晴らしい点数ですね。\n");
    }
    else if (score >= 70 && score < 90) {
        printf("素晴らしい点数ですね。\n");
    }
    else if (score >= 60 && score < 70) {
        printf("もう少し頑張りましょう。\n");
    }
    else if (score >= 0 && score < 60) {
        printf("単位を落としています。しっかり頑張りましょう。\n");
    }

    return 0;
}