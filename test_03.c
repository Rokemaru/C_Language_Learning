#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("��������͂��Ă�������: ");
    scanf("%d", &num); // double�^�̏ꍇ�� %lf ���g���܂�

    printf("���͂��ꂽ�l�� %d �ł��B\n", num); // �\���� %f �̂܂܂�OK

    return 0;
}