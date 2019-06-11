/*
	整数配列を動的に生成
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;
	int i, nx;

	printf("生成する配列の要素数：");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));					/* 確保 */

	if (x == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		for (i = 0; i < nx; i++)					/* 値を代入 */
			x[i] = i;

		for (i = 0; i < nx; i++)					/* 値を表示 */
			printf("x[%d] = %d\n", i, x[i]);

		free(x);									/* 解放 */
	}

	return 0;
}
