#include <stdio.h>

int main(void)
{
    // int�^�̕ϐ�num��0�ŏ�����
    int num = 0;

    // �i���ɍ���g�p����l����
    num = 3;

    // printf�ŕϐ��̒l��\��
    printf("�ϐ�num�̒l��%d�ł��B\n", num);

	//�@�ϐ�num�ɂ���ɒl����
    num = 5;

	// �ϐ�num�̒l��ύX�������Ƃ�\��
    printf("�ϐ�num�̒l��ύX���܂����B\n");

	// �ύX��̕ϐ�num�̒l��\��
    printf("�ϐ�num�̒l��%d�ł��B\n", num);

    return 0;
}