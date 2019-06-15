/* 演習1-3の解答例 */

#include <stdio.h>

int main(void)
{
	int x = 123,  y = 456;
	int *p1 = &x;
	int *p2 = &y;
	int *temp;

	temp = p1;
	p1 = p2;
	p2 = temp;

	printf("*p1の値＝%d\n", *p1);		/* p1が指すyの値を表示 */
	printf("*p2の値＝%d\n", *p2);		/* p2が指すxの値を表示 */

	return 0;
}
