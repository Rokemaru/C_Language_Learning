#include <stdio.h>

int main(void) {
    int nam1 = 10;  // �����������l�i�D���Ȓl�ɕς����܂��j
    int sum = 0;    // ���v��ۑ�����ϐ�
    int i;

    // for���[�v���g����3��J��Ԃ�
    for (i = 0; i < 3; i++) {
        sum = sum + nam1; // sum��nam1�𑫂��Ă���
        // sum += nam1; �Ə������Ƃ��ł��܂�
        printf("%d��ڂ̉��Z��̍��v: %d\n", i + 1, sum);
    }

    printf("-------------\n");
    printf("�ŏI�I�ȍ��v�� %d �ł��B\n", sum);

    return 0;
}