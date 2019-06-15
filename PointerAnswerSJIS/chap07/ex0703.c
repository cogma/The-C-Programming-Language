/* 演習7-3の解答例 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- 文字列sの複製を作る ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}

int main(void)
{
	char s[128];
	char *p;

	printf("文字列sを入力してください：");
	scanf("%s", s);

	if ((p = str_dup(s)) != NULL) {		/* 文字列を複製 */
		printf("その文字列のクローンpを作りました。\n");
		printf("s = \"%s\"\n", s);
		printf("p = \"%s\"\n", p);
		free(p);						/* 記憶域を解放 */
	}
}
