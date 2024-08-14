#include <stdio.h>
#include <iostream>

int main() {

    int a;
    a = 7;

    printf("%d\n", a);

    // コンピューターは4バイト選んでpという名前をつける。

    // ｐという記憶場所にはアドレスしか記憶できない。

    // アドレス専用の記憶場所のことをポインタって呼ぶ。

    // int型のポインタ
    int* p;

    // pにはaのアドレスが記憶される。
    p = &a;

    // aも*pも同じ記憶場所を指している。

    // p番地の記憶場所を指している。
    *p = 0;

    printf("%d\n", a);

    return 0;
}