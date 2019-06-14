/* 演習1-1の解答例 */

#include <stdio.h>

int main(void)
{
	int n  = 100;
	int *p = &n;

	printf("　nの値＝%d\n", n);		/* 　nはint型 */
	printf("*&nの値＝%d\n", *&n);	/* *&nはint型 */
	printf("　pの値＝%p\n", p);		/* 　pはint *型 */
	printf("&*pの値＝%p\n", &*p);	/* &*pはint *型 */

	printf("sizeof(n)　＝%u\n", (unsigned)sizeof(n));
	printf("sizeof(*&n)＝%u\n", (unsigned)sizeof(*&n));
	printf("sizeof(p)　＝%u\n", (unsigned)sizeof(p));
	printf("sizeof(&*p)＝%u\n", (unsigned)sizeof(&*p));

	return 0;
}
