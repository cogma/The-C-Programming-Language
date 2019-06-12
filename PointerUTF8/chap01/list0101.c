/* オブジェクトの値とアドレスを表示 */

#include <stdio.h>

int main(void)
{
	int n1 = 15;	/* n1はint型のオブジェクト */
	int n2 = 73;	/* n2はint型のオブジェクト */

	printf("n1の値＝%d\n", n1);			/* n1の値を表示 */
	printf("n2の値＝%d\n", n2);			/* n2の値を表示 */

	printf("n1のアドレス＝%p\n", &n1);	/* n1のアドレスを表示 */
	printf("n2のアドレス＝%p\n", &n2);	/* n2のアドレスを表示 */

	return 0;
}
