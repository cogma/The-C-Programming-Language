/*
	サークルの人数の増減
*/

#include <stdio.h>

/*--- 人数増加 ---*/
void increment(int *no)
{
	++*no;				/* *noの値を一つ増やす */
}

/*--- 人数減少 ---*/
void decrement(int *no)
{
	--*no;				/* *noの値を一つ減らす */
}

int main(void)
{
	int x = 5;			/* サークルxは5人 */
	int y = 3;			/* サークルyは3人 */

	increment(&x);		/* サークルxで1人増えた */
	decrement(&y);		/* サークルyで1人減った */

	printf("サークルxの所属人数＝%d\n", x);
	printf("サークルyの所属人数＝%d\n", y);

	return 0;
}
