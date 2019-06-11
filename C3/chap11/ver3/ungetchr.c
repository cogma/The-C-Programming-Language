/*
	�P�������o�̓��C�u�����i��R�Łj"ungetchr.c"
*/

#include <stdio.h>

#define BUFSIZE  256			/* �o�b�t�@�̑傫�� */

extern char buffer[BUFSIZE];	/* �o�b�t�@ */
extern int  buf_no;				/* ���݂̗v�f�� */
extern int  front;				/* �擪�v�f�J�[�\�� */
extern int  rear;				/* �����v�f�J�[�\�� */

/*--- �P���������߂� ---*/
int ungetchr(int ch)
{
	if (buf_no >= BUFSIZE)		/* �o�b�t�@�����t�ł���� */
		return EOF;				/* ����ȏ㉟���߂��Ȃ� */
	else {
		buf_no++;
		buffer[rear++] = ch;
		if (rear == BUFSIZE)
			rear = 0;
		return ch;
	}
}