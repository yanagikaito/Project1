#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
};

void setArray(V* p) {

    for (V* i = 0; i < p;) {
        for (V* j = 0; j < p;) {
            j++;
            printf("j�̒l = j:%d\n", j);
        }
        i++;
        printf("i�̒l = i:%d\n", i);
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