/*
	�P����t�@�C������ǂݍ���ŕ\������i���ǔŁj
*/

#include <ctype.h>
#include <stdio.h>

#define Q_NO  3				/* ���̌� */

FILE *fp;

/*--- �������� ---*/
int initialize(void)
{
	fp = fopen("DATA", "r");
	return (fp == NULL) ? 0 : 1;
}

/*--- �I������ ---*/
void ending(void)
{
	fclose(fp);
}

/*--- ���C���֐� ---*/
int main(void)
{
	if (initialize()) {
		int  q, ch;
		char qus[20];			/* ���p������ */
		char ans[20];			/* �𓚗p������ */

		for (q = 0; q < Q_NO; q++) {
			int i;

			if ((ch = fgetc(fp)) == EOF) goto ending;

			for (i = 0; !(isspace(ch)); i++) {
				qus[i] = ch;
				ch = fgetc(fp);
			}
			qus[i] = '\0';

			ch = fgetc(fp);
			for (i = 0; !(isspace(ch)); i++) {
				ans[i] = ch;
				ch = fgetc(fp);
			}
			ans[i] = '\0';
			printf("��聁%s �𓚁�%s\n", qus, ans);
		}
	ending:
		ending();
	}
	return 0;
}
