#include <stdio.h>

int main() {
    int number;

    printf("��������͂��Ă��������B\n");

    // scanf�ɂ� &number ��n��
    scanf("%d", &number);

    // �ǂݎ�������l��1��
    if (number == 1) {
        // ������
        printf("1�����͂���܂����B\n");
    }
    else {
        // �������Ȃ�
        printf("1�ȊO�����͂���܂����B\n");
    }
    return 0;
}