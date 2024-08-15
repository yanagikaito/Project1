#include <stdio.h>
#include <iostream>
#define NUM (3)

void setArray(int* p) {

    for (int* i = 0; i < p;) {
        for (int* j = 0; j < p;) {
            j++;
            printf("j‚Ì’l = j:%d\n", j);
        }
        i++;
        printf("i‚Ì’l = i:%d\n", i);
    }
}

int main() {

    int n[] = { NUM };

    int* p;

    p = n;

    scanf_s("%d", &p);

    setArray(p);

    return 0;
}