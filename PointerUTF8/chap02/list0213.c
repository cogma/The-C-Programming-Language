/* register付きで宣言された配列の大きさを表示 */

#include <stdio.h>

int main(void)
{
	register int a[5];

	printf("sizeof(a) = %u\n", (unsigned)sizeof(a));

	return 0;
}
