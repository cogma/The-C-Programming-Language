/*
	�t�@�C�����獀�ڂ�ǂݍ���ŕ\���i�x����̃v���O�����j
*/

#include <stdio.h>

FILE *fp;
char *field = "%s\t%s\t%s\t%s\t%s";
char a[9];		/* �󒍓� */
char b[7];		/* ���i��� */
char c[9];		/* ���[�� */
char d[10];		/* ���z */
char e[8];		/* �P�� */

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
