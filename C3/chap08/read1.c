/*
	ファイルから項目を読み込んで表示（Ｙさんのプログラム）
*/

#include <stdio.h>

FILE *fp;
char *field = "%s\t%s\t%s\t%s\t%s";
char a[9];		/* 受注日 */
char b[7];		/* 商品種類 */
char c[9];		/* 完納日 */
char d[10];		/* 金額 */
char e[8];		/* 単価 */

int main(void)
{
	fp = fopen("data1.txt", "r");
	while (fscanf(fp, field, a, b, c, d, e) != EOF) {
		printf(field, a, b, c, d, e);
		putchar('\n');
	}
	fclose(fp);

	return 0;
}
