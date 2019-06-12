/* printf関数とscanf関数の利用例 */

#include <stdio.h>

int main(void)
{
	int  n;
	long k;
	char s[20];

	printf("整数nを入力せよ：");
	scanf("%d", &n);				/* int型10進数の読込み：&が必要 */

	printf("整数kを入力せよ：");
	scanf("%ld", &k);				/* long型10進数の読込み：&が必要 */

	printf("文字列sを入力せよ：");
	scanf("%s", s);					/* 文字列の読込み：&が不要 */

	printf("整数 n の値は%dです。\n",  n);		/* &は不要 */
	printf("整数 k の値は%ldです。\n", k);		/* &は不要 */
	printf("文字列sの値は%sです。\n",  s);		/* &は不要 */

	return 0;
}
