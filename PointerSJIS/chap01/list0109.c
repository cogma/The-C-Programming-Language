/* ポインタを整数値に変換して表示 */

#include <stdio.h>

int main(void)
{
	int n;			/* nはint型 */
	int *p = &n;	/* pはint *型 */

	/* nへのポインタを符号無し整数値に変換して表示 */
	printf("&n：%lu\n", (unsigned long)&n);
	printf(" p：%lu\n", (unsigned long)p);

	return 0;
}
