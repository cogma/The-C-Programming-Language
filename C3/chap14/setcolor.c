/*
	�R���\�[����ʂ̕����F�E�w�i�F��ݒ� "setcolor.c"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "display.h"

/*--- �F�̕����� ---*/
char *color_str[] = {
	"BLACK", "BLUE", "RED", "GREEN", "MAGENTA", "CYAN", "YELLOW", "WHITE",
	"GRAY", "BRIGHT_BLUE", "BRIGHT_RED", "BRIGHT_GREEN", "BRIGHT_MAGENTA",
	"BRIGHT_CYAN", "BRIGHT_YELLOW", "BRIGHT_WHITE"
};

/*--- ��������r�i�啶���E����������ʂ��Ȃ��j ---*/
int strcmpx(const char *s1, const char *s2)
{
	while (toupper(*s1) == toupper(*s2)) {
		if (*s1 == '\0')			/* ������ */
			return 0;
		s1++;
		s2++;
	}
	return toupper((unsigned char)*s1) - toupper((unsigned char)*s2);
}

/*--- �F�̕�������R�[�h�ɕϊ� ---*/
int get_color(char *str)
{
	int i;

	for (i = 0; i < sizeof(color_str) / sizeof(color_str[0]); i++)
		if (!strcmpx(str, color_str[i]))
			return i;
	return -1;				/* �Y���F�͂Ȃ� */
}

/*--- �G���[���b�Z�[�W�Ǝg������\�����ċ����I�� ---*/
void error(int code)
{
	switch (code) {
	 case 1: fprintf(stderr, "�����F�E�w�i�F���w�肵�Ă��������B\n"); break;
	 case 2: fprintf(stderr, "�����F�̎w�肪����������܂���B\n");	  break;
	 case 3: fprintf(stderr, "�w�i�F�̎w�肪����������܂���B\n");	  break;
	}
	fprintf(stderr, "---------------------------------------\n");
	fprintf(stderr, "SETCOLOR �����F [�w�i�F]\n");
	fprintf(stderr, "---------------------------------------\n");
	fprintf(stderr, "�����F�ɂ͈ȉ��Ɏ���16�F���A\n");
	fprintf(stderr, "�w�i�F�ɂ͍�����8�F���w�肵�Ă��������B\n");
	fprintf(stderr, "�w�i�F���ȗ�����ƍ��Ƃ݂Ȃ��܂��B\n");
	fprintf(stderr, "---------------------------------------\n");
	fprintf(stderr, "BLACK        GRAY\n");
	fprintf(stderr, "BLUE         BRIGHT_BLUE\n");
	fprintf(stderr, "RED          BRIGHT_RED\n");
	fprintf(stderr, "GREEN        BRIGHT_GREEN\n");
	fprintf(stderr, "MAGENTA      BRIGHT_MAGENTA\n");
	fprintf(stderr, "CYAN         BRIGHT_CYAN\n");
	fprintf(stderr, "YELLOW       BRIGHT_YELLOW\n");
	fprintf(stderr, "WHITE        BRIGHT_WHITE\n");

	exit(1);					/* �����I�� */
}

int main(int argc, char *argv[])
{
	int fg;				/* �����F */
	int bg = BLACK;		/* �w�i�F */

	if (argc < 2)		/* �����F���w�i�F���w�肳��Ă��Ȃ� */
		error(1);
	if (argc >= 2)
		if ((fg = get_color(argv[1])) == -1) error(2);
	if (argc >= 3)
		if ((bg = get_color(argv[2])) == -1) error(3);

	colorx(fg, bg);		/* �����F�Ɣw�i�F��ݒ� */

	return 0;
}
