/*
	�����t�������ƕ������������̔�r�i�������Z�q�𗘗p�j
*/

#include <stdio.h>

int main(void)
{
	int      sdata = -1;		/* �����t������ */
	unsigned udata =  1;		/* ������������ */

	printf("sdata < udata ���Ȃ킿 -1 < 1U �� %s�B\n",
										(sdata < udata) ? "�^" : "�U");

	printf("(unsigned)sdata < udata ���Ȃ킿 (unsigned)-1 < 1U �� %s�B\n",
						 ((unsigned)sdata < udata) ? "�^" : "�U");

	return 0;
}
