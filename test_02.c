#include <stdio.h>

int main(void)
{
    // double�^�̕ϐ� f_num1 �� f_num2 ��錾
    double f_num1 = 0.0;
    double f_num2 = 0.0;

    // f_num1 �� 3.14 �������āA�\��
    f_num1 = 3.14;
    printf("�ϐ�f_num1�̒l��%.2f�ł��B\n", f_num1);

    // f_num2 �� f_num1 �̒l�������āA�\��
    f_num2 = f_num1;
    printf("�ϐ�num1�̒l��num2�ɑ�����܂����B\n");
    printf("�ϐ�f_num2�̒l��%.2f�ł��B\n", f_num2);

    return 0;
}