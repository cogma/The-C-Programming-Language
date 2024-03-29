/*
	読み込んだ文字列の複製を動的に生成する
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- 文字列sの複製を生成して返却 ---*/
char *strdup(const char* s)
{
	char *p = malloc(strlen(s) + 1);
	return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	char st[128];
	char *pt;

	printf("文字列stを入力してください：");
	scanf("%s", st);

	if (pt = strdup(st)) {
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);					/* 記憶域を解放 */
	}

	return 0;
}
