/*
	��ʐ��䃉�C�u�����i�G�X�P�[�v�V�[�P���X�^Win32API�j�w�b�_"display.h"
*/

#ifndef __DISPLAY
#define __DISPLAY

enum {
	BLACK,				/* �� */
	BLUE,				/* �� */
	RED,				/* �� */
	GREEN,				/* �� */
	MAGENTA,			/* �Ԏ� */
	CYAN,				/* ���F */
	YELLOW,				/* ���F */
	WHITE,				/* �� */
	GRAY,				/* �D�F */
	BRIGHT_BLUE,		/* ���邢�� */
	BRIGHT_RED,			/* ���邢�� */
	BRIGHT_GREEN,		/* ���邢�� */
	BRIGHT_MAGENTA,		/* ���邢�Ԏ� */
	BRIGHT_CYAN,		/* ���邢���F */
	BRIGHT_YELLOW,		/* ���邢���F */
	BRIGHT_WHITE		/* �P���� */
};

/*--- ��ʏ��� ---*/
void cls(void);

/*--- �J�[�\���ʒu��(__x, __y)�ɐݒ� ---*/
void locate(int __x, int __y);

/*--- �����F��__fg�ɔw�i�F��__bg�ɐݒ� ---*/
void colorx(int __fg, int __bg);

/*---  �����F��__col�ɐݒ� ---*/
void color(int __col);

#endif
