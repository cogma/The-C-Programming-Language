/*
	�P�������o�̓��C�u�����s�����t�@�C���t"getchr.c"
*/

#include <stdio.h>
#include "_getchr.h"
#include "getchr.h"

char __buffer[__BUFSIZE];		/* �o�b�t�@ */
int __buf_no = 0;				/* ���݂̗v�f�� */
int __front = 0;				/* �擪�v�f�J�[�\�� */
int __rear = 0;					/* �����v�f�J�[�\�� */

/*--- �P�������o�� ---*/
int getchr(void)
{
	if (__buf_no <= 0)			/* �o�b�t�@����ł���� */
		return getchar();		/* �L�[�{�[�h����ǂݍ���ŕԂ� */
	else {
		int temp;

		__buf_no--;
		temp = __buffer[__front++];
		if (__front == __BUFSIZE)
			__front = 0;
		return temp;
	}
}
