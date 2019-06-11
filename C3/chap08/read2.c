/*
	�P���ǂݍ��ފ֐��ɂ���@
*/

#include <stdio.h>

struct rec {
	char a[9];		/* �󒍓� */
	char b[7];		/* ���i��� */
	char c[9];		/* ���[�� */
	char d[10];		/* ���z */
	char e[8];		/* �P�� */
};

/*--- �P���ǂݍ��ށi�^�u�^���s�����ŋ�؂��Ă���Ƃ��󔒕����͖����j---*/
int fgetword(FILE *fp, char *str)
{
	int ch;

	while ((ch = fgetc(fp)) != EOF && ch != '\t' && ch != '\n') {
		if (ch != ' ')
			*str++ = ch;
	}
	*str = '\0';
	return ch;
}

/*--- �P���̃��R�[�h��ǂݍ��� ---*/
int getrec(FILE *fp, struct rec *dat)
{
	if (fgetword(fp, dat->a) == EOF) return EOF;		/* �󒍓� */
	if (fgetword(fp, dat->b) == EOF) return EOF;		/* ���i��� */
	if (fgetword(fp, dat->c) == EOF) return EOF;		/* ���[�� */
	if (fgetword(fp, dat->d) == EOF) return EOF;		/* ���z */
	if (fgetword(fp, dat->e) == EOF) return EOF;		/* �P�� */

	return 0;
}

int main(void)
{
	FILE  *fp;
	struct rec	dat;

	fp = fopen("data2.txt", "r");		/* �s���S�ȃf�[�^ */
	while (getrec(fp, &dat) == 0) {
		printf("%s\t%s\t%s\t%s\t%s\n", dat.a, dat.b, dat.c, dat.d, dat.e);
	}
	fclose(fp);

	return 0;
}