#include <stdio.h>

int main(void) {
    int x;    
    double y, z;

    printf("1�̐�����2�̏������L�[�{�[�h������͂��A���낢��ȉ��Z���ł���\�t�g�ł��B\n");

    // ����X����
    printf("����X����͂��Ă��������B\n");
    scanf("%d", &x);

    // ����Y����
    printf("����Y�i�����_��2�ʂ܂Łj����͂��Ă��������B\n");
    scanf("%lf", &y);

    // ����Z����
    printf("����Z�i�����_��2�ʂ܂Łj����͂��Ă��������B\n");
    scanf("%lf", &z);


    printf("X+Y=%.2f\n", (double)x + y);
    printf("Y+Z=%.2f\n", y + z);

    printf("X-Y=%.2f\n", x - y);
    printf("Y-Z=%.2f\n", y - z);

    printf("X*Y=%.2f\n", (double)x * y);
    printf("Y*Z=%.4f\n", (double)y * z);

    printf("X/Y=%.3f\n", x / y);
    printf("Y/Z=%.4f\n", y / z);

    printf("X��Y��Z�̘a��%.2f�ł��B\n", (double)x + y + z);
    printf("X��Y��Z�̕��ϒl��%.3f�ł��B\n", ((double)x + y + z) / 3.0);

    return 0;
}