/*
	dump �c �t�@�C���̃_���v
*/

#include <ctype.h>
#include <stdio.h>

/*--- �X�g���[��src�̓��e��dst�փ_���v ---*/
void dump(FILE *src, FILE *dst)
{
	int n;
	unsigned long count = 0;
	unsigned char buf[16];

	while ((n = fread(buf, 1, 16, src)) > 0) {
		int i;

		fprintf(dst, "%08lX ", count);						/* �A�h���X */

		for (i = 0; i < n; i++)								/* 16�i�� */
			fprintf(dst, "%02X ", (unsigned)buf[i]);

		if (n < 16)
			for (i = n; i < 16; i++) fputs("   ", dst);

		for (i = 0; i < n; i++)								/* ���� */
			fputc(isprint(buf[i]) ? buf[i] : '.', dst);

		fputc('\n', dst);

		count += 16;
	}

	fputc('\n', dst);
}

int main(int argc, char *argv[])
{
	FILE *fp;

	if (argc < 2)
		fputs("�t�@�C�����w�肵�Ă��������B\n", stderr);
	else {
		while (--argc > 0) {
			if ((fp = fopen(*++argv, "rb")) == NULL) {
				fprintf(stderr,	"�t�@�C��%s���I�[�v���ł��܂���B\n", *argv);
				return 1;
			} else {
				dump(fp, stdout); 	 /* �X�g���[��fp �� �W���o�� */
				fclose(fp);
			}
		}
	}

	return 0;
}
