#include <stdio.h>
#include <iostream>
#define NUM (3)

int main() {

    int n[] = { NUM };

    int* p;

    p = n;

    scanf_s("%d%*n", &p);

    for (int* i = 0; i < p; i++) {
        for (int* j = 0; j < p; j++) {
            j = j + 1;
            printf("j‚Ì’l = j:%d\n", j);
        }
        i = i + 1;
        printf("i‚Ì’l = i:%d\n", i);
    }
    return 0;
}