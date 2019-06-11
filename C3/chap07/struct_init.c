/*
	構造体オブジェクトの初期化（初期化子不足のメンバは0で初期化される）
*/

#include <stdio.h>

int main(void)
{
	struct xy {
		int    x;
		double y;
	};
	struct xy s = {1};		/* s.xは1  で初期化され、s.yは  0で初期化される */
	struct xy t = s;		/* t.xはs.xで初期化され、t.yはs.yで初期化される */

	printf("s.x = %d\n", s.x);		/* オブジェクトsのメンバxの値を表示 */
	printf("s.y = %f\n", s.y);		/* オブジェクトsのメンバyの値を表示 */
	printf("t.x = %d\n", t.x);		/* オブジェクトtのメンバxの値を表示 */
	printf("t.y = %f\n", t.y);		/* オブジェクトtのメンバyの値を表示 */

	return 0;
}
