#include <stdio.h>

int main(void)
{
    // ���x50���i�[����ϐ���p��
    int humidity = 50;

    // �C�����i�[����ϐ���p��
    double temperature = 0.0;

    // ���̎��x��\��
    printf("���̎��x��%d%%�ł��B\n", humidity);

    // ���̕��͂����̂܂ܕ\��
    printf("���̋C��(������1�ʂ܂�)����͂��Ă��������B\n");

    // �L�[�{�[�h���珬������́A�ϐ�temperature�Ɋi�[
    scanf("%lf", &temperature);

    // ���͂��ꂽ�C�����A�����_�ȉ�1���ŕ\��
    printf("���̋C���� %.1f���ł��ˁB\n", temperature);

    printf("�M���ǂɋC�����܂��傤�I\n");

    return 0;
}