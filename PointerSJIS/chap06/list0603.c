/* 構造体のメンバへのポインタを比較 */

#include <stdio.h>

int main(void)
{
	struct ab {
		struct xy {
			int    x;
			double y;
		} a;
		int b;
	} z;

	printf("&z.a   <= &z.b   = %d\n", &z.a   <= &z.b);
	printf("&z.a.x <= &z.a.y = %d\n", &z.a.x <= &z.a.y);

	return 0;
}
