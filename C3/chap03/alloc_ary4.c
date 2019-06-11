/*
	４次元配列を動的に生成
*/

#include <stdio.h>
#include  <stdlib.h>

int main(void)
{
	int (*x)[5][4][3];
	int n;				/* 最も高い次元の要素数 */

	puts("n×5×4×3の配列を確保します。");
	printf("nの値は：");
	scanf("%d", &n);

	x = calloc(n * 5 * 4 * 3, sizeof(int));		/* 確保 */

	if (x == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		int i, j, k, m;

		for (i = 0; i < n; i++)
			for (j = 0; j < 5; j++)
				for (k = 0; k < 4; k++)
					for (m = 0; m < 3; m++)
						printf("x[%d][%d][%d][%d] = %d\n", i, j, k, m, x[i][j][k][m]);
		free(x);							/* 解放 */
	}

	return 0;
}
