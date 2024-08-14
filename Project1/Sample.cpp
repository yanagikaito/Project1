#include <stdio.h>
#include <iostream>
#include "V.h"

void setStruct(struct V* p) {

    p->x = 1;
    p->y = 2;
}

int main() {

    struct V a;
    a = { NUM_X,NUM_Y };

    // struct V* p;
    // p = &a;
    // p->x = 0;
    // p->y = 0;

    setStruct(&a);

    printf("%d %d\n", a.x, a.y);

    return 0;
}