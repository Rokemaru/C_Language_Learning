#include <stdio.h>
#define NUM_PEOPLE 5

int main(void) {
    int scores[NUM_PEOPLE];
    int i, j, temp;

    printf("5人の点数を入力せよ。\n");

    // 点の入力
    for (i = 0; i < NUM_PEOPLE; i++) {
        printf("%d番: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // ソート降順する
    for (i = 0; i < NUM_PEOPLE - 1; i++) {
        for (j = 0; j < NUM_PEOPLE - 1 - i; j++) {
            if (scores[j] < scores[j + 1])   {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("降順にソートしました。:\n");
    for (i = 0; i < NUM_PEOPLE; i++) {
        printf("%d番: %d\n", i + 1, scores[i]);
    }

    return 0;
}