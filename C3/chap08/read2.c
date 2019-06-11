/*
	単語を読み込む関数による解法
*/

#include <stdio.h>

struct rec {
	char a[9];		/* 受注日 */
	char b[7];		/* 商品種類 */
	char c[9];		/* 完納日 */
	char d[10];		/* 金額 */
	char e[8];		/* 単価 */
};

/*--- 単語を読み込む（タブ／改行文字で区切られているとし空白文字は無視）---*/
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

/*--- １件のレコードを読み込む ---*/
int getrec(FILE *fp, struct rec *dat)
{
	if (fgetword(fp, dat->a) == EOF) return EOF;		/* 受注日 */
	if (fgetword(fp, dat->b) == EOF) return EOF;		/* 商品種類 */
	if (fgetword(fp, dat->c) == EOF) return EOF;		/* 完納日 */
	if (fgetword(fp, dat->d) == EOF) return EOF;		/* 金額 */
	if (fgetword(fp, dat->e) == EOF) return EOF;		/* 単価 */

	return 0;
}

int main(void)
{
	FILE  *fp;
	struct rec	dat;

	fp = fopen("data2.txt", "r");		/* 不完全なデータ */
	while (getrec(fp, &dat) == 0) {
		printf("%s\t%s\t%s\t%s\t%s\n", dat.a, dat.b, dat.c, dat.d, dat.e);
	}
	fclose(fp);

	return 0;
}