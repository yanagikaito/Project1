#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
};

void setArray(int* p) {
    for (int* j = 0; j < p;) {
        j = j + 1;
        printf("p�̒l = p:%d\n", p);
        printf("j�̒l = j:%d\n", j);
        for (int* i = 0; i < p;) {
            i = i + 1;
            printf("i�̒l = i:%d\n", i);
        }
    }
}

int main() {

    int n[NUM];

    int* p;

    p = n;

    scanf_s("%d", &p);

    setArray(p);

    return 0;
}