#include <stdio.h>

int main(void)
{
    // �������i�[���邽�߂̕ϐ���p��
    char greeting[] = " ";

    // ���[�U�[����
    printf("�D���ȕ�����1���͂��Ă�������: ");

    // ������1���͂��Ă��炤
    scanf(" %c", &greeting);

    // ���͂��ꂽ������\������
    printf("���Ȃ������͂��������� '%c' �ł��ˁI\n", greeting);

    return 0;
}