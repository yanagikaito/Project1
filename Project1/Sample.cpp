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
            n[x][y] = {
                x * EDGE,
                y * EDGE,
            };
        }
    }

    V* p;                 // �e�v�f���Q�Ƃ��邽�߂̃|�C���^

    int a = 114514;    // �{�؂Ƃ͊֌W�Ȃ��ϐ��ł��B
    printf("[�T���v��]�ϐ�a�̒l�F%d\r\n", a);
    printf("[�T���v��]�ϐ�a�̃A�h���X�F%d\r\n", &a);

    p = &n[NUM_X][NUM_Y];   // V�̃|�C���^��V�z��̐擪�A�h���X��n���B

    // [�`�F�b�N�|�C���g1]�z��擪�v�f��scanf�ɂ���ď����ς���Ă��邱�Ƃ��m�F�B
    printf("[�`�F�b�N�|�C���g1]n[0]=%d\r\n", p->x);

    // [�`�F�b�N�|�C���g2]�m�F�p�R�[�h
    printf("[�`�F�b�N�|�C���g2]p�̌��݂̃A�h���X��[%p]\r\n", p);
    printf("[�`�F�b�N�|�C���g2]1�v�f�������V�̃o�C�g��=%d\r\n", (int)(p + 1) - (int)(p));    // V��8�ł��邱�Ƃ��킩��

    // ���|�C���^��"�Q�Ɛ�A�h���X"��ύX����  <- ����́E�E�E
    printf("[�d�v]�����ɃT���v���̃A�h���X����͂��Ă݂悤!!:");
    scanf_s("%d\r\n", &p);
    printf("[�d�v]p->x�̒l�̌���:%d\r\n", p->x, p->y);
    printf("[�d�v]a�̒l���Q�Ƃ��ꂽ���Ƃ��킩��ˁI\r\n���Ȃ݂�2����͂���K�v������̂�%%d��4�o�C�g�ł���4�o�C�g�����͂��邩��Ȃ񂾁I\r\n");

    // [�`�F�b�N�|�C���g3]�z��擪�v�f��scanf�ɂ���ď����ς���Ă��邱�Ƃ��m�F�B
    printf("[�`�F�b�N�|�C���g3]n[0]=%d\r\n", p->x, p->y);

    return 0;
}