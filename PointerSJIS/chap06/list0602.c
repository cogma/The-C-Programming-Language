/* 構造体メンバのアドレスを表示 */

#include <stdio.h>

int main(void)
{
	struct xyz {
		int    x;
		long   y;
		double z;
	} a;

	printf("&a   = %p\n", &a  );	/* aのアドレスを表示 */
	printf("&a.x = %p\n", &a.x);	/* aのメンバxのアドレスを表示 */
	printf("&a.y = %p\n", &a.y);	/* aのメンバyのアドレスを表示 */
	printf("&a.z = %p\n", &a.z);	/* aのメンバzのアドレスを表示 */

	return 0;
}
