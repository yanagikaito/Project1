#include <stdio.h>
#include <iostream>
#define NUM (3)

typedef struct {
    int x;
    int y;
} V;

int main(void) {

    V n[NUM];    // �v�f��3 (�e�v�f�ɂ��Ă͏��������Ă��Ȃ����ߓK���Ȓl�������Ă���j
    V* p;        // �e�v�f���Q�Ƃ��邽�߂̃|�C���^

    int a = 114514;    // �{�؂Ƃ͊֌W�Ȃ��ϐ��ł��B
    printf("[�T���v��]�ϐ�a�̒l�F%d\r\n", a);
    printf("[�T���v��]�ϐ�a�̃A�h���X�F%d\r\n", &a);

    p = n;    // V�̃|�C���^��V�z��̐擪�A�h���X��n���B

    // [�`�F�b�N�|�C���g1]�z��擪�v�f��scanf�ɂ���ď����ς���Ă��邱�Ƃ��m�F�B
    printf("[�`�F�b�N�|�C���g1]n[0]=%d\r\n", p->x);

    // [�`�F�b�N�|�C���g2]�m�F�p�R�[�h
    printf("[�`�F�b�N�|�C���g2]p�̌��݂̃A�h���X��[%p]\r\n", p);
    printf("[�`�F�b�N�|�C���g2]1�v�f�������V�̃o�C�g��=%d\r\n", (int)(p + 1) - (int)(p));    // V��8�ł��邱�Ƃ��킩��

    // ���|�C���^��"�Q�Ɛ�A�h���X"��ύX����  <- ����́E�E�E
    printf("[�d�v]�����ɃT���v���̃A�h���X����͂��Ă݂悤!!:");
    scanf_s("%d\r\n", &p);
    printf("[�d�v]p->x�̒l�̌���:%d\r\n", p->x);
    printf("[�d�v]a�̒l���Q�Ƃ��ꂽ���Ƃ��킩��ˁI\r\n���Ȃ݂�2����͂���K�v������̂�%%d��4�o�C�g�ł���4�o�C�g�����͂��邩��Ȃ񂾁I\r\n");

    // [�`�F�b�N�|�C���g3]�z��擪�v�f��scanf�ɂ���ď����ς���Ă��邱�Ƃ��m�F�B
    printf("[�`�F�b�N�|�C���g3]n[0]=%d\r\n", p->x);

    return 0;
}