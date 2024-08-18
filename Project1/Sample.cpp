#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    int x;
    int y;
};

void setArray(V* p) {

    // int型はサイズが4バイトのためポインタ変数をインクリメントすると4バイト先のアドレスを指します．

    for (V* j = 0; j < p;) {
        j = j + 1;
        printf("pの値 = p:%d\n", p);
        printf("jの値 = j:%d\n", j);
        for (V* i = 0; i < p;) {
            i = i + 1;
            printf("iの値 = i:%d\n", i);
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