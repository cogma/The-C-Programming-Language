/* 演習3-3の解答例 */

#include <stdio.h>

/*--- n×2×4の配列の全構成要素にvを代入 ---*/
void fill_avalue(int a[][2][4], int n, int v)
{
	int i, j, k;

	for (i = 0; i < n; i++)
		for (j = 0; j < 2; j++)
			for (k = 0; k < 4; k++)
				a[i][j][k] = v;
}

int main(void)
{
	int i, j, k, no;
	int mx[3][2][4];

	printf("全構成要素に代入する値：");
	scanf("%d", &no);

	fill_avalue(mx, 3, no);		/* mxの全構成要素にnoを代入 */

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			for (k = 0; k < 4; k++)
				printf("mx[%d][%d][%d] = %3d\n", i, j, k, mx[i][j][k]);

	return 0;
}
