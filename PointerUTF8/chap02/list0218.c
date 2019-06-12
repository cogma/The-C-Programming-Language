/* 線形探索（第２版）*/

#include <stdio.h>

/*--- 配列aの先頭n個の要素から値keyを線形探索（第２版）---*/
int seq_search(int *a, int n, int key)
{
	int *p = a;

	while (n-- > 0) {
		if (*p == key)	/* 探索成功 */
			return p - a;
		else
			*p++;
	}
	return -1;			/* 探索失敗 */
}

int main(void)
{
	int i, key, idx;
	int x[7];
	int x_size = sizeof(x) / sizeof(x[0]);		/* 配列xの要素数 */

	for (i = 0; i < x_size; i++) {
		printf("x[%d]：", i);					/* x[i]の入力を促す */
		scanf("%d", &x[i]);
	}
	printf("探す値は：");
	scanf("%d", &key);

	if ((idx = seq_search(x, x_size, key)) != -1)
		printf("その値をもつ要素はx[%d]です。\n", idx);
	else
		puts("見つかりませんでした。");

	return 0;
}
