/* height�swidth��̂Q�����z��i���ǂ��j�𓮓I�Ɋm�ہi���̂Q�j*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height, width;		/* �s���Ɨ� */
	int **p;	  /* �|�C���^�ւ̃|�C���^ */

	printf("�s���F");	scanf("%d", &height);
	printf("�񐔁F");	scanf("%d", &width);

	p = calloc(height, sizeof(int *));

	if (p == NULL) 
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i, j;
		int *base = calloc(height * width, sizeof(int));

		if (base == NULL)
			puts("�L����̊m�ۂɎ��s���܂����B");
		else {
			for (i = 0; i < height; i++)
				p[i] = base + i * width;

			for (i = 0; i < height; i++)		/* �S�v�f��0���� */
				for (j = 0; j < width; j++)
					p[i][j] = 0;

			for (i = 0; i < height; i++)		/* �S�v�f�̒l��\�� */
				for (j = 0; j < width; j++)
					printf("p[%d][%d] = %d\n", i, j, p[i][j]);
		}
		free(base);
	}
	free(p);

	return 0;
}
