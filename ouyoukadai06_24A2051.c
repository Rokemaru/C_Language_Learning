#include <stdio.h>

int main(void) {
    int num;      
    int sum = 0;   
    int product = 1; 
    int i;        

    printf("1����L�[���͂�������(����)�܂ł𑫂����u���v�l�v�Ɓu�������l�v�����߂�v���O�����ł��B\n");
    printf("�����܂ł̐��l�̌v�Z�l�����߂܂����H\n");
    printf("1����10�܂ł̐���(����)���L�[���͂��Ă��������B\n");

    scanf_s("%d", &num);

    for (i = 1; i <= num; i++) {
        sum = sum + i;  
        product = product * i; 

        printf("1����%d�܂ł̑S�Ă̒l�𑫂������v�l��%d�ł��B\n", i, sum);
        printf("1����%d�܂ł̑S�Ă̒l���������l��%d�ł��B\n", i, product);
    }

    printf("����������\n");
    printf("1����%d�܂ł̍��v�l��%d�ł��B\n", num, sum);
    printf("1����%d�܂ł��������l��%d�ł��B\n", num, product);

    return 0; 
}