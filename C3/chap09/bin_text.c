/*
	バイナリファイルをテキストファイルとして読み取る
*/

#include <stdio.h>

#define MAX  10

int main(void)
{
	FILE *fp;
	int i, x, y;
	int a[MAX];

	/*--- 配列aと変数x,yの値をファイルから読み取る ---*/
	if ((fp = fopen("TEMP", "r")) != NULL) {
		fread( a, sizeof(int), MAX, fp);		/* aを読取り */
		fread(&x, sizeof(int),	 1, fp);		/* xを読取り */
		fread(&y, sizeof(int),	 1, fp);		/* yを読取り */

		fclose(fp);

		/*--- 読み込んだ値を表示 ---*/
		for (i = 0; i < MAX; i++)
			printf("a[%d] = %d\n", i, a[i]);
		printf("x = %d\n", x);
		printf("y = %d\n", y);
	}

	return 0;
}
