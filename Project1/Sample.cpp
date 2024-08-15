#include <stdio.h>
#include <iostream>

int main() {

    int a[3];

    for (int i = 0; i < 3; i++) {
        a[i] = i + 1;
    }


    /* a[0] = 1;
     a[1] = 2;
     a[2] = 3;*/

    int* p;

    // []をとったものがアドレスとなる。

    // 配列の場合は先頭アドレス

    p = a;

    for (int i = 0; i < 3; i++) {
        p[i] = 0;
        printf("%d\n", a[i]);
    }

    /* p[0] = 0;
     p[1] = 0;
     p[2] = 0;*/

    return 0;
}