/* 初期化された構造体のメンバの値を表示 */

#include <stdio.h>

int main(void)
{
	struct xyz {
		int    x;
		long   y;
		double z;
	} a = {57, 123456789L, 3.14};

	struct xyz *p = &a;

	printf("(*p).x = %d\n",   (*p).x);		/* pが指す構造体のメンバx */
	printf("(*p).y = %ld\n",  (*p).y);		/*  　　〃　　　のメンバy */
	printf("(*p).z = %.2f\n", (*p).z);		/*  　　〃　　　のメンバz */

	return 0;
}
