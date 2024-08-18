#include <stdio.h>
#include <iostream>
#define NUM_X (10)
#define NUM_Y (20)
#define EDGE  (32)

struct V {
    int x;
    int y;
};

int main(void) {

    V n[NUM_X][NUM_Y];    // 要素は10,20 (各要素については初期化していないため適当な値が入っている）

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            n[x][y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    V* p;                 // 各要素を参照するためのポインタ

    int a = 114514;    // 本筋とは関係ない変数です。
    printf("[サンプル]変数aの値：%d\r\n", a);
    printf("[サンプル]変数aのアドレス：%d\r\n", &a);

    p = &n[NUM_X][NUM_Y];   // VのポインタへV配列の先頭アドレスを渡す。

    // [チェックポイント1]配列先頭要素がscanfによって書き変わっていることを確認。
    printf("[チェックポイント1]n[0]=%d\r\n", p->x);

    // [チェックポイント2]確認用コード
    printf("[チェックポイント2]pの現在のアドレスは[%p]\r\n", p);
    printf("[チェックポイント2]1要素あたりのVのバイト数=%d\r\n", (int)(p + 1) - (int)(p));    // Vが8であることがわかる

    // ★ポインタの"参照先アドレス"を変更する  <- これは・・・
    printf("[重要]試しにサンプルのアドレスを入力してみよう!!:");
    scanf_s("%d\r\n", &p);
    printf("[重要]p->xの値の結果:%d\r\n", p->x, p->y);
    printf("[重要]aの値が参照されたことがわかるね！\r\nちなみに2回入力する必要があるのは%%dが4バイトでもう4バイト分入力するからなんだ！\r\n");

    // [チェックポイント3]配列先頭要素がscanfによって書き変わっていることを確認。
    printf("[チェックポイント3]n[0]=%d\r\n", p->x, p->y);

    return 0;
}