/*
	�I�u�W�F�N�g�̋L������ԁi�ÓI�^�����j�Ə�����
*/

#include <stdio.h>

int ft;					/* �ÓI�L������� */

void func(void)
{
	int        at = 0;	/* �����L������� */
	static int st;		/* �ÓI�L������� */

	ft++;
	at++;
	st++;
	printf("ft = %d  at = %d  st = %d\n", ft, at, st);
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
		func();

	return 0;
}
