/*
	�P����t�@�C������ǂݍ���ŕ\������
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

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
		char qus[20] = "";			/* ���p������ */
		char ans[20] = "";			/* �𓚗p������ */

		for (q = 0; q < Q_NO; q++) {
			int i;

			strcpy(ans, "");		/* ���҂ǂ���̓�������Ȃ��H */
			strcpy(qus, "");		/* �@�@�@�@�@�V�@�@�@�@�@�@�@ */

			if ((ch = fgetc(fp)) == EOF) goto ending;

			for (i = 0; !(isspace(ch)); i++) {
				qus[i]   = ch;
				qus[i+1] = '\0';			/* ��ő}�� */
				ch = fgetc(fp);
			}
			ch = fgetc(fp);
			for (i = 0; !(isspace(ch)); i++) {
				ans[i]	 = ch;
				ans[i+1] = '\0';			/* ��ő}�� */
				ch = fgetc(fp);
			}
			printf("��聁%s �𓚁�%s\n", qus, ans);
		}
	ending:
		ending();
	}
	return 0;
}
