#include <stdio.h>
#include <iostream>

int main() {

    int a;
    a = 7;

    printf("%d\n", a);

    // �R���s���[�^�[��4�o�C�g�I���p�Ƃ������O������B

    // ���Ƃ����L���ꏊ�ɂ̓A�h���X�����L���ł��Ȃ��B

    // �A�h���X��p�̋L���ꏊ�̂��Ƃ��|�C���^���ČĂԁB

    // int�^�̃|�C���^
    int* p;

    // p�ɂ�a�̃A�h���X���L�������B
    p = &a;

    // a��*p�������L���ꏊ���w���Ă���B

    // p�Ԓn�̋L���ꏊ���w���Ă���B
    *p = 0;

    printf("%d\n", a);

    return 0;
}