/* ２次元配列の全構成要素の値とアドレスを表示 */

#include <stdio.h>

int main(void)
{
	int i, j;
	int a[2][3] = {0};	/* 2行3列の２次元配列 */

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf( "a[%d][%d] = %d  ", i, j,  a[i][j]);	/* 値 */
			printf("&a[%d][%d] = %p\n", i, j, &a[i][j]);	/* アドレス */
		}
	}
	return 0;
}
