#include <stdio.h>

int main(void) {
    // 身長データ 
    int heights[] = { 180, 160, 122, 150, 175 };

    // 人の数
    int num_people = 5;

    for (int i = 0; i < num_people; i++) { 
        printf("%d番目の人の身長は%dcmです。\n", i + 1, heights[i]);
    }

    return 0;
}