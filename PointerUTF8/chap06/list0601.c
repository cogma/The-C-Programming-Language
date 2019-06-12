/* 構造体のメンバに値を代入して表示 */

#include <stdio.h>

int main(void)
{
	struct xyz {		/* タグ名xyzの構造体 */
		int    x;		/* int   型のメンバ */
		long   y;		/* long  型のメンバ */
		double z;		/* double型のメンバ */
	};

	struct xyz a;		/* struct xyz型のオブジェクト */

	a.x = 57;						/* メンバに値を代入 */
	a.y = 123456789L;				/* 　〃　 */
	a.z = 3.14;						/* 　〃　 */

	printf("a.x = %d\n",   a.x);	/* メンバの値を表示 */
	printf("a.y = %ld\n",  a.y);	/* 　〃　 */
	printf("a.z = %.2f\n", a.z);	/* 　〃　 */

	return 0;
}
