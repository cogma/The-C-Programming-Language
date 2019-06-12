/* height行width列の２次元配列（もどき）を動的に確保（その２）*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height, width;		/* 行数と列数 */
	int **p;	  /* ポインタへのポインタ */

	printf("行数：");	scanf("%d", &height);
	printf("列数：");	scanf("%d", &width);

	p = calloc(height, sizeof(int *));

	if (p == NULL) 
		puts("記憶域の確保に失敗しました。");
	else {
		int i, j;
		int *base = calloc(height * width, sizeof(int));

		if (base == NULL)
			puts("記憶域の確保に失敗しました。");
		else {
			for (i = 0; i < height; i++)
				p[i] = base + i * width;

			for (i = 0; i < height; i++)		/* 全要素に0を代入 */
				for (j = 0; j < width; j++)
					p[i][j] = 0;

			for (i = 0; i < height; i++)		/* 全要素の値を表示 */
				for (j = 0; j < width; j++)
					printf("p[%d][%d] = %d\n", i, j, p[i][j]);
		}
		free(base);
	}
	free(p);

	return 0;
}
