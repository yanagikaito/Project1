#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    // 4�o�C�g
    int x;
};

void setArray(int* p) {

    for (int* i = 0; i < p;) {
        for (int* j = 0; j < p;) {
            // ���[�v���ƂɃX�^�b�N�̈��4�o�C�g�ǉ������
            j = j + 1;
            printf("j�̒l = j:%d\n", j);
        }
        // ���[�v���ƂɃX�^�b�N�̈��4�o�C�g�ǉ������
        i = i + 1;
        printf("i�̒l = i:%d\n", i);
    }
}

int main() {

    int n[NUM];

    int* p;

    // n�̐擪�A�h���X���������܂��B
    p = n;

    scanf_s("%d", &p);

    setArray(p);

    return 0;
}