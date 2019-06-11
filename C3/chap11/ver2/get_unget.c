/*
	�P�������o�̓��C�u�����i��Q�Łj
*/

#include <stdio.h>

#define BUFSIZE  256		/* �o�b�t�@�̑傫�� */

static char buffer[BUFSIZE];		/* �o�b�t�@ */
static int buf_no = 0;				/* ���݂̗v�f�� */
static int front = 0;				/* �擪�v�f�J�[�\�� */
static int rear = 0;				/* �����v�f�J�[�\�� */

/*--- �P�������o�� ---*/
int getchr(void)
{
	if (buf_no <= 0)			/* �o�b�t�@����ł���� */
		return getchar();		/* �L�[�{�[�h����ǂݍ���ŕԂ� */
	else {
		int temp;

		buf_no--;
		temp = buffer[front++];
		if (front == BUFSIZE)
			front = 0;
		return temp;
	}
}

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
