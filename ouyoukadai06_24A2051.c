#include <stdio.h>

int main(void) {
    int num;      
    int sum = 0;   
    int product = 1; 
    int i;        

    printf("1からキー入力した数字(整数)までを足した「合計値」と「かけた値」を求めるプログラムです。\n");
    printf("いくつまでの数値の計算値を求めますか？\n");
    printf("1から10までの数字(整数)をキー入力してください。\n");

    scanf_s("%d", &num);

    for (i = 1; i <= num; i++) {
        sum = sum + i;  
        product = product * i; 

        printf("1から%dまでの全ての値を足した合計値は%dです。\n", i, sum);
        printf("1から%dまでの全ての値をかけた値は%dです。\n", i, product);
    }

    printf("したがって\n");
    printf("1から%dまでの合計値は%dです。\n", num, sum);
    printf("1から%dまでをかけた値は%dです。\n", num, product);

    return 0; 
}