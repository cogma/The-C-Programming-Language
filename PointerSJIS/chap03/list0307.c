/* P³zñðó¯æéÖÉQ³zñðn· */

#include <stdio.h>

/*--- vfnÌzñaÌSvfÌlð\¦ ---*/
int print_array(const int a[], int n)
{
	int i;

	printf("{");
	if (n >= 2)
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
	if (n >= 1)
		printf("%d", a[n - 1]);
	printf("}");
}

/*--- vfnÌzñaÌSvfÌvðßé ---*/
int sum(const int a[], int n)
{
	int i;
	int sum = 0;	/* v */

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{
	int i, j;
	int x[] = {1, 3, 5, 7};				/* vf4ÌP³zñ */
	int y[][5] = { {1, 2, 3, 4, 5},		/* 3s5ñÌQ³zñ */
				   {1, 1, 1, 1, 1},
				   {1, 3, 5, 7, 9},
				 };
	int x_size = sizeof(x) / sizeof(x[0]);			/* xÌvf */
	int y_height = sizeof(y) / sizeof(y[0]);		/* yÌs */
	int y_width  = sizeof(y[0]) / sizeof(y[0][0]);	/* yÌñ */

	printf("zñxc");
	print_array(x, x_size);
	printf(" v%d\n", sum(x, x_size));

	for (i = 0; i < y_height; i++) {
		printf("zñy[%d]c", i);
		print_array(y[i], y_width);
		printf(" v%d\n", sum(y[i], y_width));
	}

	return 0;
}
