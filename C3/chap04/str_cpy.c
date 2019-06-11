/*
	文字列のコピーを行う関数の実現例
*/

/*--- 文字列をコピー(１) ---*/
char *scpy1(char *d, const char *s)
{
	int i = 0;

	while ((d[i] = s[i]) != '\0')
		i++;

	return d;
}

/*--- 文字列をコピー(２) ---*/
char *scpy2(char *d, const char *s)
{
	char *p = d;

	while ((*d = *s) != '\0') {
		d++;
		s++;
	}

	return p;
}

/*--- 文字列をコピー(３) ---*/
char *scpy3(char *d, const char *s)
{
	char *p = d;

	while ((*d++ = *s++) != '\0')
		;

	return p;
}

/*--- 文字列をコピー(４) ---*/
char *scpy4(char *d, const char *s)
{
	char *p = d;

	while (*d++ = *s++)
		;

	return p;
}
