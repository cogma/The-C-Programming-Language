/*
	������̃R�s�[���s��
*/

#include <stdio.h>

/*--- ������f��t�ɃR�s�[ ---*/
void scp1(char *f, char *t)
{
	while (*f != '\0') {
		*t = *f;
		f++;  t++;
	}
	*t = '\0';
}

/*--- ������f��t�ɃR�s�[�i�o�O����j ---*/
void scp2(char *f, char *t)
{
	do {
		*t++ = *f++;
	} while (*f);
}

int main(void)
{
	char astr[7] = "ABC";
	char bstr[7] = "XXXXXX";
	char cstr[7] = "YYYYYY";

	scp1(astr, bstr);				/* �֐�scp1��astr��bstr�ɃR�s�[ */
	scp2(astr, cstr);				/* �֐�scp2�� �V ��cstr�ɃR�s�[ */

	printf("astr = %s\n", astr);
	printf("bstr = %s\n", bstr);
	printf("cstr = %s\n", cstr);

	return 0;
}
