/*
	�I�u�W�F�N�g�̋L������ԁi�ÓI�^�����j�Ə�����
*/

#include <stdio.h>

int ft;					/* �ÓI�L������� */

void func(void)
{
	int        at = sin(0.9);  /* �n�j */
	static int st = sin(0.9);  /* �G���[ */
}

int main(void)
{
	func();

	return 0;
}
