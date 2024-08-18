#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
    int y;
};

void setArray(V* p) {
    for (V* j = 0; j < p;) {
        j = j + 1;
        printf("p‚Ì’l = p:%d\n", p);
        printf("j‚Ì’l = j:%d\n", j);
        for (V* i = 0; i < p;) {
            i = i + 1;
            printf("i‚Ì’l = i:%d\n", i);
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