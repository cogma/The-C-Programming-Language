/*
	�o�C�i���t�@�C�����e�L�X�g�t�@�C���Ƃ��ēǂݎ��
*/

#include <stdio.h>

#define MAX  10

int main(void)
{
	FILE *fp;
	int i, x, y;
	int a[MAX];

	/*--- �z��a�ƕϐ�x,y�̒l���t�@�C������ǂݎ�� ---*/
	if ((fp = fopen("TEMP", "r")) != NULL) {
		fread( a, sizeof(int), MAX, fp);		/* a��ǎ�� */
		fread(&x, sizeof(int),	 1, fp);		/* x��ǎ�� */
		fread(&y, sizeof(int),	 1, fp);		/* y��ǎ�� */

		fclose(fp);

		/*--- �ǂݍ��񂾒l��\�� ---*/
		for (i = 0; i < MAX; i++)
			printf("a[%d] = %d\n", i, a[i]);
		printf("x = %d\n", x);
		printf("y = %d\n", y);
	}

	return 0;
}
