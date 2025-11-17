#include <stdio.h>

int calculate_sum(int a, int b)
{
    // 2つの引数を足し算
    return a + b;
}

int main(void)
{
    int price1; // 1つめの車の値段
    int price2; // 2つめの車の値段
    int total;  // 合計金額

    printf("1つめの車の値段は何万円ですか?\n");
    scanf("%d", &price1);

    printf("2つめの車の値段は何万円ですか?\n");
    scanf("%d", &price2);
 
    total = calculate_sum(price1, price2);

    printf("%d万円と%d万円の車を買いました。\n", price1, price2);

    printf("合計で%d万円です。\n", total);

    return 0;
}