#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
};

int main() {

    struct V n[NUM];

    n[0].x = 0;
    n[1].x = 1;
    n[2].x = 2;

    struct V* p;

    p = n;

    p[0].x = 3;
    p[1].x = 4;
    p[2].x = 5;

    for (int i = 0; i < 3; i++) {
        p[i];
        printf("%d\n", p[i]);
    }
    return 0;
}