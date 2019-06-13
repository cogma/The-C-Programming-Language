/* 確保した領域の大きさを変更（誤り）*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;		/* 配列の要素数 */
	int *p;

	printf("確保する配列の要素数：");
	scanf("%d", &n1);

	p = calloc(n1, sizeof(int));	/* int型整数n1個の配列を動的に確保 */

	if (p == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		int i, n2;
		int no = n1;				/* 配列の要素数 */

		for (i = 0; i < n1; i++)	/* 全要素に添字と同じ値を代入 */
			p[i] = i;

		printf("要素数をいくつに変更しますか：");
		scanf("%d", &n2);

		p = realloc(p, n2 * sizeof(int));	/* 要素数をn2に変更 */

		if (p == NULL)
			puts("領域の大きさの変更に失敗しました。");
		else {
			for (i = n1; i < n2; i++)	/* 増えた要素に添字と同じ値を代入 */
				p[i] = i;
			no = n2;
		}

		for (i = 0; i < no; i++)		/* 全要素の値を表示 */
			printf("p[%d] = %d\n", i, p[i]);

		free(p);						/* 確保していた領域を解放 */
	}
	return 0;
}
