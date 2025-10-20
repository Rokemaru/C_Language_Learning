#include <stdio.h>

int main(void) {
    int age_nbr;

    printf("飲酒可能な年齢か判断するソフトです。\n");
    printf("あなたの年齢を入力してください\n");

	// ユーザーからage_nbrをげっと
    scanf("%d", &age_nbr);

    // f文で年齢判定
    if (age_nbr >= 20) {
        printf("二十歳以上ですね。\n");
        printf("お酒を飲んでも大丈夫ですね。\n");
    }
    else {
        printf("二十歳未満ですね。\n");
        printf("まだ、お酒を飲んではいけません。\n");
    }

    printf("以上で質問は終了です。\n");

    return 0;
}