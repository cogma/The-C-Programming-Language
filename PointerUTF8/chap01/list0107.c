/* int型とint *型の大きさを表示 */

#include <stdio.h>

int main(void)
{
	int n;		/* int型 */
	int *p;		/* int *型 */

	printf("int  型は%uバイトです。\n", (unsigned)sizeof(int));
	printf("int *型は%uバイトです。\n", (unsigned)sizeof(int *));

	printf(" nは%uバイトです。\n", (unsigned)sizeof(n));
	printf("*pは%uバイトです。\n", (unsigned)sizeof(*p));
	printf(" pは%uバイトです。\n", (unsigned)sizeof(p));
	printf("&nは%uバイトです。\n", (unsigned)sizeof(&n));

	return 0;
}
