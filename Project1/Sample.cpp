#include <stdio.h>
#include <iostream>

void setZeroInt(int* p) {
    *p = 0;
}

int main() {

    int a;
    a = 7;

    // &�A�h���X��n��
    setZeroInt(&a);

    printf("%d\n", a);

    return 0;
}