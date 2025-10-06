#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("整数を入力してください: ");
    scanf("%d", &num); // double型の場合は %lf を使います

    printf("入力された値は %d です。\n", num); // 表示は %f のままでOK

    return 0;
}