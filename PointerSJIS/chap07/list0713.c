/* 文字列を動的に確保 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[128];
	char *p;

	printf("文字列sを入力してください：");
	scanf("%s", s);

	p = malloc(strlen(s) + 1);		/* 文字列用の記憶域を確保 */

	if (p) {
		strcpy(p, s);
		printf("その文字列のクローンpを作りました。\n");
		printf("s = \"%s\"\n", s);
		printf("p = \"%s\"\n", p);
		free(p);					/* 記憶域を解放 */
	}

	return 0;
}
