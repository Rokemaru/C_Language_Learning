#include <stdio.h>

int main(void) {
    int age_nbr;

    printf("�����\�ȔN����f����\�t�g�ł��B\n");
    printf("���Ȃ��̔N�����͂��Ă�������\n");

	// ���[�U�[����age_nbr��������
    scanf("%d", &age_nbr);

    // f���ŔN���
    if (age_nbr >= 20) {
        printf("��\�Έȏ�ł��ˁB\n");
        printf("����������ł����v�ł��ˁB\n");
    }
    else {
        printf("��\�Ζ����ł��ˁB\n");
        printf("�܂��A����������ł͂����܂���B\n");
    }

    printf("�ȏ�Ŏ���͏I���ł��B\n");

    return 0;
}