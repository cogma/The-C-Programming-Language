/*
	ポインタを通じてオブジェクトの値を間接的に変更
*/

#include <stdio.h>

int main(void)
{
	int x = 5;		/* サークルxは5人 */
	int y = 3;		/* サークルyは3人 */
	int *ptr;

	ptr = &x;						/* ptrはxを指す */
	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);		/* ptrが指すアドレス */
	printf("*ptr = %d\n\n", *ptr);	/* ptrが指す変数の値 */

	ptr = &y;						/* ptrはyを指す */
	*ptr = 4;						/* ptrを通じてサークルyの人数を変更 */
	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);		/* ptrが指すアドレス */
	printf("*ptr = %d\n", *ptr);	/* ptrが指す変数の値 */

	return 0;
}
