/*
	������̃R�s�[�i�󕶂̗��p��F�J�Ԃ����̖{�̂Ƃ��āj
*/

#include <stdio.h>

/*--- ������s��d�ɃR�s�[ */
char *strcopy(char *d, const char *s)
{
	char *p = d;

	while (*d++ = *s++)
		;							/* �� */
	return p;
}

int main(void)
{
	char sx[20] = "ABC";
	char sy[20] = "";

	strcopy(sy, sx);					/* ������sx��sy�ɃR�s�[ */

	printf("������sx = %s\n", sx);
	printf("������sy = %s\n", sy);

	return 0;
}
