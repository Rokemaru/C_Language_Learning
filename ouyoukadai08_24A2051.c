#include <stdio.h>
#define NUM_PEOPLE 5

int main(void) {
    int heights[NUM_PEOPLE];
    int i, j, temp;

    printf("身長を入力して背の高い人から低い人へソートするプログラムです。\n");
    printf("%d人の身長を入力してください。\n", NUM_PEOPLE);

    for (i = 0; i < NUM_PEOPLE; i++) {
        if (scanf("%d", &heights[i]) != 1) {
            printf("入力エラーが発生しました。\n");
            return 1;
        }
    }

    // ソート 
    for (i = 0; i < NUM_PEOPLE - 1; i++) {
        for (j = 0; j < NUM_PEOPLE - 1 - i; j++) {
            if (heights[j] < heights[j + 1]) {
                temp = heights[j];
                heights[j] = heights[j + 1];
                heights[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < NUM_PEOPLE; i++) {
        printf("%d番目の人の身長は%dcmです。\n", i + 1, heights[i]);
    }

    return 0;
}