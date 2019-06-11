/*
	������̃R�s�[���s���֐��̎�����
*/

/*--- ��������R�s�[(�P) ---*/
char *scpy1(char *d, const char *s)
{
	int i = 0;

	while ((d[i] = s[i]) != '\0')
		i++;

	return d;
}

/*--- ��������R�s�[(�Q) ---*/
char *scpy2(char *d, const char *s)
{
	char *p = d;

	while ((*d = *s) != '\0') {
		d++;
		s++;
	}

	return p;
}

/*--- ��������R�s�[(�R) ---*/
char *scpy3(char *d, const char *s)
{
	char *p = d;

	while ((*d++ = *s++) != '\0')
		;

	return p;
}

/*--- ��������R�s�[(�S) ---*/
char *scpy4(char *d, const char *s)
{
	char *p = d;

	while (*d++ = *s++)
		;

	return p;
}
