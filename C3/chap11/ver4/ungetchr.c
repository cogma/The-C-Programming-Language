/*
	�P�������o�̓��C�u�����s�����t�@�C���t"ungetchr.c"
*/

#include <stdio.h>
#include "_getchr.h"
#include "getchr.h"

/*--- �P���������߂� ---*/
int ungetchr(int ch)
{
	if (__buf_no >= __BUFSIZE)		/* �o�b�t�@�����t�ł���� */
		return EOF;					/* ����ȏ㉟���߂��Ȃ� */
	else {
		__buf_no++;
		__buffer[__rear++] = ch;
		if (__rear == __BUFSIZE)
			__rear = 0;
		return ch;
	}
}
