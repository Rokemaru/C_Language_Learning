#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    int i;

    printf("1����L�[���͂��������i�����j�܂ł𑫂������v�l�����߂�v���O�����ł��B\n");

    printf("�����܂ł̍��v�����߂܂����H\n");

    printf("�������L�[���͂��Ă��������B\n");

    scanf_s("%d", &num);

    for (i = 1; i <= num; i++) {
        sum = sum + i;
    }

    printf("1����%d�܂ł̍��v��%d�ł��B\n", num, sum);

    return 0;
}