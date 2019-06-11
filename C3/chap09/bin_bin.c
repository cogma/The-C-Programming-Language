/*
	�o�C�i���t�@�C���̓��o�͗�
*/

#include <stdio.h>

#define MAX  10

int main(void)
{
	FILE *fp;
	int i;
	int x = 2573;
	int y = 12609;
	int a[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	if ((fp = fopen("TEMP", "wb")) != NULL) {
		/*--- �z��a�ƕϐ�x,y�̒l���t�@�C���ɏ������� ---*/
		fwrite( a, sizeof(int), MAX, fp);		/* a�������� */
		fwrite(&x, sizeof(int),	  1, fp);		/* x�������� */
		fwrite(&y, sizeof(int),	  1, fp);		/* y�������� */
		fclose(fp);

		x = y = 0;
		for (i = 0; i < MAX; i++)
			a[i] = 0;

		/*--- �z��a�ƕϐ�x,y�̒l���t�@�C������ǂݎ�� ---*/
		if ((fp = fopen("TEMP", "rb")) != NULL) {
			fread( a, sizeof(int), MAX, fp);	/* a��ǎ�� */
			fread(&x, sizeof(int),	 1, fp);	/* x��ǎ�� */
			fread(&y, sizeof(int),	 1, fp);	/* y��ǎ�� */
			fclose(fp);

			/*--- �ǂݎ�����l��\�� ---*/
			for (i = 0; i < MAX; i++)
				printf("a[%d] = %d\n", i, a[i]);
			printf("x = %d\n", x);
			printf("y = %d\n", y);
		}
	}

	return 0;
}
