/*
	読み込んだ文字列の複製を動的に生成する
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char st[128];
	char *pt;

	printf("文字列stを入力してください：");
	scanf("%s", st);

	pt = malloc(strlen(st) + 1);		/* 文字列領域を動的に生成 */

	if (pt) {
		strcpy(pt, st);					/* 生成した領域にコピー */
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);						/* 記憶域を解放 */
	}

	return 0;
}
