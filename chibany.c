// main.c �� chibany.c �ȂǁAmain�֐�������t�@�C��

#include <stdlib.h>
#include <windows.h>
#include "chibany.h" // �`�o�j�[�̐݌v�}��ǂݍ��ށI

int main(void)
{
    for (int i = 0; i < 40; i++) {

        system("cls");

        // �`�o�j�[��`�����Ɓidraw_chibany�j���Ăяo���I
        // �ui�v�̈ʒu�ɕ`���ĂˁA�Ƃ��肢���Ă���
        draw_chibany(i);

        Sleep(150);
    }

    return 0;
}