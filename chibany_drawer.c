// chibany_drawer.c

#include <stdio.h>
#include "chibany.h" // ���������ō�����݌v�}��ǂݍ���

// �݌v�}�Ŗ񑩂����@�\�́A��̓I�ȏ������e
void draw_chibany(int position)
{
    // �`�o�j�[���������ɕ\�������邽�߂̉��s
    printf("\n\n\n\n");

    // �`�o�j�[���E�ɓ����� (position�̐������X�y�[�X��}��)
    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(\\__/)\n");

    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(^.^ ) < hop!\n");

    for (int j = 0; j < position; j++) {
        printf(" ");
    }
    printf("(\")_(\")\n");
}