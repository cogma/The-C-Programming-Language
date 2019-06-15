/* 演習7-2の解答例 */

#include <stdio.h>
#include <stdlib.h>

/*--- ptrの指すold_sizeバイトの確保済み領域をsizeバイトに変更
	  ※ 新たに確保した領域の全ビットを0で埋め尽くす--- */
void *recalloc(void *ptr, size_t size, size_t old_size)
{
	void *tmp;

	if (size == 0)
		return NULL;

	tmp = realloc(ptr, size);
	if (tmp != NULL && size > old_size)
		memset((char *)tmp + old_size, 0, size - old_size);

	return tmp;
}

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
		int *temp;

		printf("要素数をいくつに変更しますか：");
		scanf("%d", &n2);

		temp = recalloc(p, n2 * sizeof(int), n1 * sizeof(int));	/* 要素数をn2に変更 */

		if (temp == NULL)
			puts("領域の大きさの変更に失敗しました。");
		else {
			p = temp;
			no = n2;
		}

		for (i = 0; i < no; i++)		/* 全要素の値を表示 */
			printf("p[%d] = %d\n", i, p[i]);

		free(p);						/* 確保していた領域を解放 */
	}
	return 0;
}
