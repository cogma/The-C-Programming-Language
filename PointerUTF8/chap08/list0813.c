/* 汎用線形探索関数 */

#include <stdlib.h>

/*--- baseが指す要素の大きさがsizeで要素数がnmembの配列からkeyと一致する要素を
	  比較関数comparを用いて線形探索 ---*/
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size,
				int (*compar)(const void *, const void *))
{
	size_t i;
	char   *x = (char *)base;

	for (i = 0; i < nmemb; i++)
		if (!compar(key, (const void *)&x[i * size]))
			return &x[i * size];		/* 探索成功 */
	return NULL;						/* 探索失敗 */
}

#include <stdio.h>

/*--- 整数を比較する関数 ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, no, *p; 
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);	/* xの要素数 */

	printf("%d個の整数を入力せよ。\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("探索する値：");
	scanf("%d", &no);

	p = seqsearch(&no, x, nx, sizeof(int), (int (*)(const void *, const void*))int_cmp);

	if (p != NULL)
		printf("x[%d]が一致します。\n", (int)(p - x));
	else
		puts("見つかりませんでした。");

	return 0;
}