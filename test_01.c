#include <stdio.h>

int main(void)
{
    // int�^�̕ϐ� num1 �� num2 ��錾
    int num1 = 0;
    int num2 = 0;

    // num1 �� 3 �������āA�\��
    num1 = 3;
    printf("�ϐ�num1�̒l��%d�ł��B\n", num1);

    // num2 �� num1 �̒l�������āA�\��
    num2 = num1;
    printf("�ϐ�num1�̒l��num2�ɑ�����܂����B\n");
    printf("�ϐ�num2�̒l��%d�ł��B\n", num2);

    return 0;
}