#include <stdio.h>
#include <stdlib.h>  // system("cls") ���g�����߂ɕK�v
#include <windows.h> // Sleep() ���g�����߂ɕK�v

int main(void)
{
    // �A�j���[�V������40�R�} (i��0����39�܂�) �J��Ԃ��܂�
    for (int i = 0; i < 40; i++) {

        // 1. ��ʂ��܂�����ɂ���
        system("cls");

        // �`�o�j�[���������ɕ\�������邽�߂̉��s
        printf("\n\n\n\n");

        // 2. �`�o�j�[���E�ɓ����� (i�̐������X�y�[�X��}��)
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // 3. �`�o�j�[��`�悷��
        printf("(\\__/)\n");

        // 2��ڂ̃X�y�[�X�}�� (2�s�ڂ����������E�ɂ��炷)
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("(^.^ ) < hop!\n"); // �W�����v���Ă��銴���̊當���ɂ��Ă݂܂���

        // 3��ڂ̃X�y�[�X�}��
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("(\")_(\")\n");

        // 4. 0.15�b�����҂� (�A�j���[�V�����̑��x)
        Sleep(150);
    }

    printf("\n\n\n"); // �Ō�ɏ����Ԃ�������

    return 0;
}