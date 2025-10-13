#include <stdio.h>

int main(void) {
    int x;    
    double y, z;

    printf("1つの整数と2つの小数をキーボードから入力し、いろいろな演算ができるソフトです。\n");

    // 整数X入力
    printf("整数Xを入力してください。\n");
    scanf("%d", &x);

    // 小数Y入力
    printf("小数Y（小数点第2位まで）を入力してください。\n");
    scanf("%lf", &y);

    // 小数Z入力
    printf("小数Z（小数点第2位まで）を入力してください。\n");
    scanf("%lf", &z);


    printf("X+Y=%.2f\n", (double)x + y);
    printf("Y+Z=%.2f\n", y + z);

    printf("X-Y=%.2f\n", x - y);
    printf("Y-Z=%.2f\n", y - z);

    printf("X*Y=%.2f\n", (double)x * y);
    printf("Y*Z=%.4f\n", (double)y * z);

    printf("X/Y=%.3f\n", x / y);
    printf("Y/Z=%.4f\n", y / z);

    printf("XとYとZの和は%.2fです。\n", (double)x + y + z);
    printf("XとYとZの平均値は%.3fです。\n", ((double)x + y + z) / 3.0);

    return 0;
}