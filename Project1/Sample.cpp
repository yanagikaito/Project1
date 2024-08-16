#include <stdio.h>
#include <iostream>
#define NUM (3)

struct V {

    // 4バイト
    int x;
};

void setArray(int* p) {

    for (int* i = 0; i < p;) {
        for (int* j = 0; j < p;) {
            // ループごとにスタック領域に4バイト追加される
            j = j + 1;
            printf("jの値 = j:%d\n", j);
        }
        // ループごとにスタック領域に4バイト追加される
        i = i + 1;
        printf("iの値 = i:%d\n", i);
    }
}

int main() {

    int n[NUM];

    int* p;

    // nの先頭アドレスが書き込まれる。
    p = n;

    scanf_s("%d", &p);

    setArray(p);

    return 0;
}