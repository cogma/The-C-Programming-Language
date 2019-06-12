/* n行3列の２次元配列の全構成要素に同一値を代入（第２版）*/

#include <stdio.h>

/*---“intを要素型とする要素数3の配列”を要素型とする要素数nの配列
	  （n行3列の２次元配列）の全構成要素にvを代入 ---*/
void fill(int (*a)[3], int n, int v)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++)
			(*a)[j] = v;
		a++;
	}
}

int main(void)
{
	int i, j, no;
	int x[2][3] = {0};
	int y[4][3] = {0};

	printf("全構成要素に代入する値：");
	scanf("%d", &no);

	fill(x, 2, no);		/* xの全構成要素にnoを代入 */
	fill(y, 4, no);		/* yの全構成要素にnoを代入 */

	puts("--- x ---");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			printf("%3d", x[i][j]);
		putchar('\n');
	}

	puts("--- y ---");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%3d", y[i][j]);
		putchar('\n');
	}

	return 0;
}
