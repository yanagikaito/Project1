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

    V n[NUM_X][NUM_Y];    // �v�f��10,20 (�e�v�f�ɂ��Ă͏��������Ă��Ȃ����ߓK���Ȓl�������Ă���j

    for (int y = 0; y < NUM_Y; y++) {
        for (int x = 0; x < NUM_X; x++) {
            n[NUM_X][NUM_Y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    struct V* p;                 // �e�v�f���Q�Ƃ��邽�߂̃|�C���^

    printf("[�T���v��]�ϐ�n�̃A�h���X�F%d\r\n", &n);

    printf("n[NUM_X]�̃A�h���X:%d\r\n", n[NUM_X]);
    printf("n[NUM_Y]�̃A�h���X:%d\r\n", n[NUM_Y]);

    p = &n[NUM_X][NUM_Y];   // V�̃|�C���^��V�z��̐擪�A�h���X��n���B

    printf("[�d�v]p->x�̒l�̌���:%d\r\n", p->x);
    printf("[�d�v]p->y�̒l�̌���:%d\r\n", p->y);

    return 0;
}