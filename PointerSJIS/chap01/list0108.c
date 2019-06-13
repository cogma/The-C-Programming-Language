/* ポインタの初期化 */

#include <stdio.h>

int main(void)
{
	int n = 123;	/* nの値は123 */
	int *p = &n;	/* pはnを指すポインタ */

	printf(" nの値＝%d\n",  n);		/* nの値 */
	printf("*pの値＝%d\n", *p);		/* pが指すオブジェクトの値 */

	return 0;
}
