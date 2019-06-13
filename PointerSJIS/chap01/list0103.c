/* ポインタが指すオブジェクトの値を表示 */

#include <stdio.h>

int main(void)
{
	int n;		/* nはint型（整数）*/
	int *ptr;	/* ptrはint *型（ポインタ）*/

	n = 57;		/* nに57を代入 */
	ptr = &n;	/* ptrにnのアドレスを代入 */

	printf("n   の値＝%d\n", n);		/* nの値を表示 */
	printf("*ptrの値＝%d\n", *ptr);		/* ptrが指すオブジェクトの値を表示 */

	return 0;
}
