/* 演習7-1 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = calloc(1, sizeof(int));		/* int型整数用の記憶域を動的に確保 */

	if (p == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		printf("*p = %d\n", *p);
	}

	return 0;
}
