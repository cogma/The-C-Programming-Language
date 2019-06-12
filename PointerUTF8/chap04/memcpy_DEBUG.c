/* memcpy関数とmemmove関数の利用例 */

#include <stdio.h>
#include <string.h>

/*--- memcpyの実現例 ---*/
void *memcpy(void *s1, const void *s2, size_t n)
{
	char       *p1 = (char *)s1;
	const char *p2 = (const char *)s2;

	while (n-- > 0)
		*p1++ = *p2++;

	return s1;
}

/*--- memmoveの実現例 ---*/
void *memmove(void *s1, const void *s2, size_t n)
{
	char       *p1 = (char *)s1;
	const char *p2 = (const char *)s2;

	if (p1 > p2 && p1 < p2 + n || p2 > p1 && p2 < p1 + n)
		for (p1 += n - 1, p2 += n - 1; n > 0; n--)	/* 末尾側からコピー */
			*p1-- = *p2--;
	else
		for ( ; n > 0; n--)							/* 先頭側からコピー */
			*p1++ = *p2++;

	return s1;
}

/*--- 配列bのn個の要素をaにコピー ---*/
int arycpy(int a[], const int b[], int n)
{
	if (n <= 0)		/* n＞0でなければならない */
		return 1;
	else {
		memcpy(a, b, n * sizeof(int)); 
		return 0;
	}
}

/*--- a[idx]にxを挿入して以降の要素を一つずつずらす ---*/
int aryins(int a[], int n, int idx, int x)
{
	if (idx < 0 || idx >= n)		/* 0≦idx＜nでなければならない */
		return 1;
	else {
		memmove(&a[idx + 1], &a[idx], (n - idx - 1) * sizeof(int)); 
		a[idx] = x;
		return 0;
	}
}

#define MAX		5		/* 配列の要素数 */

int main(void)
{
	int i;
	int x[MAX] = {1, 2, 3, 4, 5};
	int y[MAX] = {9, 9, 9, 9, 9};

	arycpy(y, x, MAX);		/* xの全要素をyにコピー */

	aryins(x, MAX, 2, 10);	/* x[2]に10を挿入 */

	puts("        x   y ");
	puts("--------------");

	for (i = 0; i < MAX; i++)
		printf("[%d] :%4d%4d\n", i, x[i], y[i]);

	return 0;
}