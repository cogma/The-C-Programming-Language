/*《ポインタの配列版》文字列の配列 */

#include <stdio.h>

int main(void)
{
	int  i;
	char *p[] = {"PAUL", "X", "MAC"};

	for (i = 0; i < 3; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
