/*
	バイナリファイルの入出力例
*/

#include <stdio.h>

#define MAX  10

int main(void)
{
	FILE *fp;
	int i;
	int x = 2573;
	int y = 12609;
	int a[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	if ((fp = fopen("TEMP", "wb")) != NULL) {
		/*--- 配列aと変数x,yの値をファイルに書き込む ---*/
		fwrite( a, sizeof(int), MAX, fp);		/* aを書込み */
		fwrite(&x, sizeof(int),	  1, fp);		/* xを書込み */
		fwrite(&y, sizeof(int),	  1, fp);		/* yを書込み */
		fclose(fp);

		x = y = 0;
		for (i = 0; i < MAX; i++)
			a[i] = 0;

		/*--- 配列aと変数x,yの値をファイルから読み取る ---*/
		if ((fp = fopen("TEMP", "rb")) != NULL) {
			fread( a, sizeof(int), MAX, fp);	/* aを読取り */
			fread(&x, sizeof(int),	 1, fp);	/* xを読取り */
			fread(&y, sizeof(int),	 1, fp);	/* yを読取り */
			fclose(fp);

			/*--- 読み取った値を表示 ---*/
			for (i = 0; i < MAX; i++)
				printf("a[%d] = %d\n", i, a[i]);
			printf("x = %d\n", x);
			printf("y = %d\n", y);
		}
	}

	return 0;
}
