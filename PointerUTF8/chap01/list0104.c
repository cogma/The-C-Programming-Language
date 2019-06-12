/* ポインタを通じて間接的にオブジェクトに値を代入 */

#include <stdio.h>

int main(void)
{
	int sw;
	int n1 = 15;
	int n2 = 73;
	int *p;

	printf("n1は%dでn2は%dです。\n", n1, n2);
	printf("どっちを変更(n1…1／n2…2)：");
	scanf("%d", &sw);

	if (sw == 1)
		p = &n1;	/* pにn1のアドレスを代入：pはn1を指す */
	else
		p = &n2;	/* pにn2のアドレスを代入：pはn2を指す */

	*p = 99;		/* pが指すオブジェクトに99を代入 */

	printf("nは%dでn2は%dです。\n", n1, n2);

	return 0;
}
