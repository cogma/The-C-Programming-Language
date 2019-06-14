/* 演習1-5の解答例 */

#include <stdio.h>

/*--- xとyの和を*waに差を*saに格納 ---*/
void sum_diff(int x, int y, int *wa, int *sa)
{
	*wa = x + y;						/* 和 */
	*sa = (x > y) ? x - y : y - x;		/* 差 */
}

int main(void)
{
	int n1, n2;
	int sum, diff;		/* 和と差 */ 

	printf("整数n1：");   scanf("%d", &n1);
	printf("整数n2：");   scanf("%d", &n2);

	sum_diff(n1, n2, &sum, &diff);

	printf("n1とn2の和＝%d\n", sum);		/* sumの値を表示 */
	printf("n1とn2の差＝%d\n", diff);		/* diffの値を表示 */

	return 0;
}
