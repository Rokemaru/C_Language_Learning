#include <stdio.h>

int main(void) {
    int score;

    score = 0;

    printf("あなたのテストの点数を入力してください。\n");

    /* 入力が正しく読み取れたか確認する。ちがったらえらー文をだす。 */
    if (scanf("%d", &score) != 1) {
        printf("入力エラーが発生しました。\n");
        return 1;
    }

    /* 90点以上のときと未満のときに分ける。こえてたらほめて、こえてなかったら警告する。 */
    if (score >= 90) {
        printf("とても素晴らしい点数ですね。\n");
    }
    else {
        printf("単位を落としてしまいます。しっかり頑張りましょう。\n");
    }

    return 0;
}