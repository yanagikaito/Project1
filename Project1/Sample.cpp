#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
    int y;
};

void setArray(V* p) {

    // int�^�̓T�C�Y��4�o�C�g�̂��߃|�C���^�ϐ����C���N�������g�����4�o�C�g��̃A�h���X���w���܂��D

    for (V* j = 0; j < p;) {
        j = j + 1;
        printf("p�̒l = p:%d\n", p);
        printf("j�̒l = j:%d\n", j);
        for (V* i = 0; i < p;) {
            i = i + 1;
            printf("i�̒l = i:%d\n", i);
        }
    }
}

int main() {

    struct V n[NUM];

    struct V* p;

    p = n;

    scanf_s("%d", &p);

    setArray(p);

    return 0;
}